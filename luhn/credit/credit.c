#include <stdio.h>

int get_length(long long num);
int last_nth_digit(long long num, int place);

int main(void)
{
    // Ask the user for the input
    long long card_num;
    printf("Enter card_num: ");
    scanf("%lld", &card_num);
    printf("card_num: %lld\n", card_num);
    // Get the number of digits in card_num
    int length_num = get_length(card_num);
    printf("length_num: %d\n", length_num);
    int checksum = 0;

    // ------ check if that input is correct based on Luhn's Algorithm ------

    // looping(non-consecutively) with length_num to get digits of card_num from last (n-1), (n-3),...
    for (int i = 2; i <= length_num; i += 2)
    {
        // get the ith digit of card_num from last and double it
        int ith_digit_x2 = 2 * last_nth_digit(card_num, i);

        // check if the product is of multiple digit
        if (get_length(ith_digit_x2) > 1)
        {
            // add the digits of that multiple digit number
            // checksum += last_nth_digit(ith_digit_x2, 1) + last_nth_digit(ith_digit_x2, 2); // one way
            checksum += (ith_digit_x2 - 9); // the other way
        }
        else
        {
            // add the digit
            checksum += ith_digit_x2;
            // printf("checksum loop1 : %d\n", checksum);
        }
    }

    // looping(non-consecutively) with length_num to get digits of card_num from last (n), (n-2),...
    for (int j = 1; j <= length_num; j += 2)
    {
        // get the jth digit of card_num from last
        int jth_digit = last_nth_digit(card_num, j);

        // += 1xdigit checksum
        checksum += jth_digit;
        // printf("checksum loop2 : %d\n", checksum);
    }
    // printf("checksum : %d\n", checksum);
    // check if that checksum ends with 0 (for card number validation)
    if (checksum % 10 != 0)
    {
        printf("checking for checksum 0\n");
        printf("INVALID\n");
        return 0;
    }

    // check which type of card it is (AMEX, MASERCARD, VISA)
    // AMEX : 15 digits - starts with 34 or 37
    // MASTERCARD : 16 digits - starts with 51, 52, 53, 54 or 55
    // VISA : 13 or 16 digits - starts with 4

    // Output the type
    int first_digit = last_nth_digit(card_num, length_num);
    int second_digit = last_nth_digit(card_num, length_num - 1);
    if (length_num == 15 && ((first_digit == 3) && ((second_digit == 4) || second_digit == 7)))
    {
        printf("AMEX\n");
    }
    else if (length_num == 16 && ((first_digit == 5) && ((second_digit == 1) || (second_digit == 2) || (second_digit == 3) || (second_digit == 4) || (second_digit == 5))))
    {
        printf("MASTERCARD\n");
    }
    else if ((length_num == 13 || length_num == 16) && (first_digit == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("neither of them\n");
        printf("INVALID\n");
    }
}

int get_length(long long num)
{
    // we need to keep applying modulo of multiple of 10 to "num" until we get a number
    // equal to "num". In this process, we will keep track of number of
    // loops and that will be equal to the number of digits in the digit num.
    int num_loops = 0;           // count the digits
    long long modulo_num = 10;   // to apply modulo for this algorithm
    long long modulo_result = 0; // to compare the modulo result of each loop with num

    while (modulo_result != num)
    {
        modulo_result = num % modulo_num;
        num_loops++;
        modulo_num *= 10;
    }
    return num_loops;
}

int last_nth_digit(long long num, int place)
{
    // we will have previous remainder (0)
    // we will have modulo of multiple of 10 (10)
    // we will have divisor calculated from modulo
    // we will take the number => apply modulo number => subtract previous remainder => divide by divisor
    // EXAMPLE:
    //  num = 1024 and place = 1,2,3,4
    // 1024 % 10 = 4 => 4 - 0 = 4 => 4 / 1 => 4 // this is 1st from last
    // 1024 % 100 = 24 => 24 - 4 = 20 => 20 / 10 => 2 // this is 2nd from last
    // 1024 % 1000 = 24 => 24 - 24 = 0 => 0 / 100 => 0 // this is 3rd from last
    // 1024 % 10000 = 1024 => 1024 - 24 = 1000 => 1000 / 1000 => 1 // this is 4th from last
    long long prev_remainder = 0;
    long long modulo_num = 10;
    int req_digit;
    for (int i = 1; i <= place; i++)
    {
        req_digit = ((num % (modulo_num)) - prev_remainder) / (modulo_num / 10); // modulo_num / 10 => divisor
        prev_remainder = num % (modulo_num);
        modulo_num *= 10;
    }
    return req_digit;
}