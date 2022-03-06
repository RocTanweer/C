#include "../../lib/cs50.h"
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Number of coins: %i\n", coins);
}

int get_cents(void)
{
    // Keep asking user until input matches the condition
    int user_input;
    do
    {
        user_input = get_int("How many cents the customer is owed: ");
    } while (user_input < 0);

    return user_input;
}

int calculate_quarters(int cents)
{
    // we need to check how many quarters(25) is in cents
    int num_quarters = 0;
    int quarter_value = 25;

    while (cents >= quarter_value)
    {
        cents -= quarter_value;
        num_quarters++;
    }

    return num_quarters;
}

int calculate_dimes(int cents)
{
    // we need to check how many dimes(10) is in cents
    int num_dimes = 0;
    int dime_value = 10;

    while (cents >= dime_value)
    {
        cents -= dime_value;
        num_dimes++;
    }
    return num_dimes;
}

int calculate_nickels(int cents)
{
    // we need to check how many nickels(5) is in cents
    int num_nickels = 0;
    int nickel_value = 5;

    while (cents >= nickel_value)
    {
        cents -= nickel_value;
        num_nickels++;
    }
    return num_nickels;
}

int calculate_pennies(int cents)
{
    return cents;
}
