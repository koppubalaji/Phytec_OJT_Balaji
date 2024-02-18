#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH  40
#define HEIGHT 20
void draw_border(void);
typedef struct {
    int x, y;
} Point;

typedef struct {
    Point position;
    int growth;
} Food;

typedef struct {
    Point position[100]; // Snake can be up to 100 segments long
    int length;
    int direction; // 0: up, 1: right, 2: down, 3: left
} Snake;

void setup();
void draw();
void input();
void logic();
void cleanup();

int gameover;
Snake snake;
Food food;

int main() {
    setup();
    while (!gameover) {
        draw();
        input();
        logic();
        usleep(100000); // Delay for smoother gameplay
    }
    cleanup();
    return 0;
}

void setup() {
    initscr();
    clear();
    noecho();
    cbreak();
    curs_set(0);
    setup_food();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    srand(time(NULL));

    gameover = 0;
    snake.length = 1;
    snake.position[0].x = WIDTH / 2;
    snake.position[0].y = HEIGHT / 2;
    snake.direction = 1; // Start moving right

    food.position.x = rand() % WIDTH;
    food.position.y = rand() % HEIGHT;
    food.growth = 0;
}
// ... (Previous code)

void draw() {
    clear();
    
    draw_border();

    // Draw the snake
    for (int i = 0; i < snake.length; i++) {
        mvprintw(snake.position[i].y , snake.position[i].x , "*");
    }

    // Draw the food
    mvprintw(food.position.y , food.position.x , "#");

    // Display the score
    mvprintw(HEIGHT , 0, "Score: %d", snake.length - 1);

    refresh();
}

// ... (Rest of the code)

void draw_border() {
    // Draw top border
    mvhline(0, 0, ACS_HLINE, WIDTH + 2);
    
    // Draw bottom border
    mvhline(HEIGHT + 1, 0, ACS_HLINE, WIDTH + 2);
    
    // Draw left border
    mvvline(1, 0, ACS_VLINE, HEIGHT);
    
    // Draw right border
    mvvline(1, WIDTH + 1, ACS_VLINE, HEIGHT);
    
    // Draw corners
    mvaddch(0, 0, ACS_ULCORNER);
    mvaddch(0, WIDTH + 1, ACS_URCORNER);
    mvaddch(HEIGHT + 1, 0, ACS_LLCORNER);
    mvaddch(HEIGHT + 1, WIDTH + 1, ACS_LRCORNER);
}

void input() {
    int c = getch();
    switch (c) {
        case KEY_UP:
            if (snake.direction != 2) snake.direction = 0;
            break;
        case KEY_RIGHT:
            if (snake.direction != 3) snake.direction = 1;
            break;
        case KEY_DOWN:
            if (snake.direction != 0) snake.direction = 2;
            break;
        case KEY_LEFT:
            if (snake.direction != 1) snake.direction = 3;
            break;
    }
}

void logic() {
    // Move the snake
    Point new_head = snake.position[0];
    switch (snake.direction) {
        case 0: new_head.y--; break; // Up
        case 1: new_head.x++; break; // Right
        case 2: new_head.y++; break; // Down
        case 3: new_head.x--; break; // Left
    }

    // Check for collisions
    if (new_head.x >= WIDTH || new_head.x < 0 || new_head.y >= HEIGHT || new_head.y < 0) {
        gameover = 1; // Hit the wall
        return;
    }
    
    for (int i = 1; i < snake.length; i++) {
        if (snake.position[i].x == new_head.x && snake.position[i].y == new_head.y) {
            gameover = 1; // Hit itself
            return;
        }
    }

    snake.position[0] = new_head;

    // Check for food
    if (snake.position[0].x == food.position.x && snake.position[0].y == food.position.y) {
        snake.length++;
        food.position.x = rand() % WIDTH;
        food.position.y = rand() % HEIGHT;
    }
}

void setup_food() {
    do {
        food.position.x = rand() % (WIDTH - 2) + 1;
        food.position.y = rand() % (HEIGHT - 2) + 1;
    } while (food.position.x == snake.position[0].x && food.position.y == snake.position[0].y);
}
void cleanup() {
    endwin();
}

