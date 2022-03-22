# Computer Fundamentals Using C

## Steps to run the Programs

### Step 1:

Clone this repository.

```bash
git clone https://github.com/RocTanweer/fundamentals.git

```

### Step 2:

Use the Table of content👇 to navigate to any particular file.

### Step 3:

Open your terminal in the same directory as indicated below👇

### Step 4:

Run the command as directed below👇

## Table of Contents

- [patterns](#patterns)
  - [mario easy](#mario-easy)
  - [mario hard](#mario-hard)
- [greedy](#greedy)
  - [cash](#cash)
- [luhn](#luhn)
  - [credit](#credit)
- [games](#games)
  - [scrabble](#scrabble)
- [math](#math)
  - [euclid](#euclid)
  - [modulus](#modulus)
  - [reverse num](#reverse-num)
  - [arrays](#arrays)
  - [circle](#circle)
- [generals](#generals)
  - [pangram](#pangram)
  - [Characters Frequency](#characters-frequency)

## Patterns

These programs prints patterns of hashes on the screen.

### Mario Easy

[see the code for this👇](/patterns/mario_easy/mario_easy.c)

```bash
~/mario/easy (master) $ ./mario_easy
Height:4
     #
    ##
   ###
  ####
```

### Mario Hard

[see the code for this👇](/patterns/mario_hard/mario_hard.c)

```bash
~/mario/hard (master) $ ./mario_hard
Height:4
     # #
    ## ##
   ### ###
  #### ####
```

## Greedy

Greedy is an algorithm that always takes the best immediate, or local, solution while finding an answer.

### cash

This program helps finding the minimum(best immediate) number of coins</br> that a customer is owed for a given number of cents.

[see the code for this👇](/greedy/cash/cash.c)

```bash
~/greedy/cash (master) $ ./cash
How many cents the customer is owed: 43
Number of pennies: 3
Number of nickels: 1
Number of dimes: 1
Number of quarters: 1
```

## Luhn

The Luhn's algorithm or Luhn formula, also known as the "modulus 10" or "mod 10" algorithm,is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers.

### credit

This program will take a credit card number and tell whether it is _Mastercard_, _American Express(AMEX)_ or _Visa_. It says INVALID, in case the card belongs to none of them.

[see the code for this👇](/luhn/credit/credit.c)

```bash
~/luhn/credit (master) $ ./credit
Enter card_num: 4111111111111111
VISA
```

## Games

These are some command-line games.

### Scrabble

This is a two player game in which both players are suppose to write a word. Player whose word correspond to more points wins. Point of a word is decided by adding points of each character, which is given in the program.

[see the code for this👇](/games/scrabble/scrabble.c)

```bash
~/games/scrabble (master) $ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!
```

## Math

These are some programs related to mathematical algorithms and proves.

### Euclid

Euclid's algorithm, is an efficient method for computing the greatest common divisor (GCD) of two integers (numbers), the largest number that divides them both without a remainder.

[see the code for this👇](/math/euclid/gcd.c)

```bash
~/math/euclid (master) $ ./gcd 168 252 329 105 189
gcd is : 7
```

### modulus

Modulo is a math operation that finds the remainder when one integer is divided by another.

[see the code for this👇](/math/modulus/mul_inverse.c)

```bash
~/math/modulus (master) $ ./mul_inverse
Give me the multiplicative inverse of: 33
Under modulo: 13
The inverse of 33 under modulo 13 is 2
```

### reverse num

This is a program which reverses the digits of a number.

[see the code for this👇](/math/reverse_num/reverse_num.c)

```bash
~/math/reverse (master) $ ./reverse_num
Enter your number: 546
reversed number: 645
```

### arrays

These are a collection of programs which performs certain operation on array elements

[see the codes for this👇](/math/arrays/)

```bash
~/math/arrays (master) $ #./<program_executable>
Enter the length of the array: 5
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 3
Element 4: 5
Sum: 14
Average: 2.80
Minimum: 1
Maximum: 5
Even values are: 2
Odd values are: 1 3 3 5
Set of the array: [1, 2, 3, 5]
Set of the array: [5, 3, 3, 2, 1]
```

### Circle

This is a program to calculate the area and circumference of a circle whose radius is provided by the user.

[see the codes for this👇](/math/circle/circle.c)

```bash
~/math/circle (master) $ ./circle
Enter the radius of the circle: 5.3
Area: 88.28
Circumference: 33.31
```

## Generals

These are programs done by solving some coding problems provided on internet/school.

### Pangram

This is a game where user type a text and the program will tell whether it contains(pangram!) all the alphabetical characters(case insensitive) or not(not pangram!).

[see the code for this👇](/generals/pangram/pangram.c)

```bash
~/generals/scrabble (master) $ ./pangram
Enter the text: The quick, brown fox jumps over the lazy dog!
pangram!
```

### Characters Frequency

This is a program to print the occurance of alphabets in a text provided as a command line argument.

[see the code for this👇](/generals/charfreq/charfreq.c)

```bash
~/generals/charfreq (master) $ ./charfreq The Quick Brown Fox Jumps Over The Lazy Dog
A 0
B 1
C 0
...
x 1
y 1
z 1
```
