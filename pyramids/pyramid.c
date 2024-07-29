#include <stdio.h>

/* This program prints a pyramid oriented on the right*/


// prototype of the function "print_row"
void print_row(int spaces, int bricks);


int main(void)
{
    int size = 8 ;
    for(int i = 0; i < size; i++){
        print_row(size, i+1);
    }

}

void print_row(int spaces, int bricks)
{
   for(int j = spaces; j  > 0; j--)
   {
        if(j > bricks){
            printf(".");
        }else {
            printf("#");
        }
   }
   printf("\n");

}

