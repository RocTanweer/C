#include <stdio.h>

/*
    Function Prototype :
        This tells the compiler that we are going to DEFINE a function 

    Function Call :
        This is the main function that gets executed 
    
    Function Definition:
        This contains the code of that function in a block
        Parameters: These are the variable placeholder in the function def
        Arguments: These are the actual values that is passed when func is called

    Important Points:
        1) C program starts from main()
        2) C program can have more than one function
        3) Every function is called directly or indirectly[
            function inside a function which is called when later one is called
        ] from main()
        4) Types of functions
            a) Library Functions -> Commonly required functions grouped together
                in a library file on disk
            b) User defined functions 
*/

void display(); // function prototype
void GM();
void GA();
void GN();

/*
sum is a function which takes parameter a(of type int) amd b(of type int)
and returns an integer
*/
int sum(int a, int b); // function prototype definition

int main()
{
    printf("Before Display code\n");
    display(); // function call
    printf("AFter Display code\n");

    // Calling other functions without parameters
    GM();
    GA();
    GN();

    // with arguments
    int one_plus_two = sum(1, 2);
    printf("The sum of one and two is : %d\n", one_plus_two);
    return 0;
};

void display()
{
    printf("This is display codes\n");
};

void GM()
{
    printf("Good Morning\n");
};
void GA()
{
    printf("Good Afternoon\n");
};
void GN()
{
    printf("Good Night\n");
};

int sum(int a, int b)
{
    return a + b;
}