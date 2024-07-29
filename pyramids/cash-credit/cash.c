#include <stdio.h>

/*
PROBLEM TO SOLVE

Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents).
You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. 
When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). 
In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents, as in the below:

*/


int main(void)
{
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    int change;
    int sum = 0;

    // ask for a positive number starting from 0.
    do{
        printf("Changed owed? \n");
        scanf("%i", &change);
    } while(change < 0);

    printf("old change: %i \n", change);

    // evaluate how many quarters.
    if(change >= 25)
    {
        quarters = (change/25);
        change %= 25;
    }
    printf("change after quarters: %i \n", change);

    // evaluate how many dimes.
    if(change >= 10){
        dimes = (change/10);
        change%=10;
    }
    printf("change after dimes: %i \n", change);

    // evaluate how many nickels.
    if(change >= 5){
        nickels = (change/5);
        change%=5;
    }
    printf("change after nickels: %i \n", change);

    // evaluate how many pennies.
    if(change >= 1){
        pennies = (change/1);
        change%=1;
    }
    printf("change after pennies: %i \n", change);

    // calculating the total of coins to give to the client
    sum = quarters + dimes + nickels + pennies;
    printf("sum: %i \n", sum);
}

