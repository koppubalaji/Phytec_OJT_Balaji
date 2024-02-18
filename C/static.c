#include<stdio.h>

// Function declarations
void hello(int b);
void hi();

// Global static variable
static int a = 10;

// Function definitions
void hi()
{
    hello(a);
    printf("%d\n", a);
}

void hello(int b)
{
    b++;
    printf("%d\n", b);
}

int main()
{
    hi();  // Call hi without passing any argument
    //hello();
    return 0;
}

