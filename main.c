#include <stdio.h>

// prototype
void print_row(int length);

int main(void)
{
    int size = 10;
    for(int i = 0; i < size; i++)
    {
        print_row(i+1);
    }
    // return 0;
}

void print_row(int length)
{
    for(int i = 0; i < length; i ++)
    {
        printf("#");
    }
    printf("\n");
}
