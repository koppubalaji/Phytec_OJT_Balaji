
#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include<string.h>



char *menu[] = {"a - add new record", "d - delete record","q - quit",NULL};
int i;
for(i=0,i<=3;i++){
	printf("%s",a[i]);
}

int getChoice(char *greet, char *choices[]) {
    int chosen = 0;
    int selected;
    char **option;
do {
        printf("Choice: %s\n", greet);
        option = choices;

        while (*option) {
            printf("%s\n", *option);
            option++;
        }


 do {
            selected = getchar();
        } while (selected == '\n');

        option = choices;

        while (*option) {
            if (selected == (*option)[0]) {
                chosen = 1;
                break;
            }
            option++;
	}

	    if (!chosen) {
            printf("Incorrect choice, select again\n");
        }

    } while (!chosen);

    return selected;
}

int main() {
    int choice = 0;
    do {
        choice = getChoice("Please select an action",menu);
        printf("You have chosen: %c\n", choice);
    } while (choice != 'q');

    exit(0);
}

