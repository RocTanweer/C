// program to calculate area of a rect
#include <stdio.h>
#include <math.h>
// int main()
// {
//     int l, b;
//     printf("Enter Length: \n");
//     scanf("%d", &l);
//     printf("Enter breath: \n");
//     scanf("%d", &b);
//     printf("The area of a rectangle is %d", l * b);
//     return 0;
// }

// program to find area of a circle

// int main()
// {
//     float PI = 22.0 / 7.0;
//     float r;
//     printf("Enter the radius: ");
//     scanf("%f", &r);
//     printf("The area of your circle is: %f", PI * r * r);
//     return 0;
// }

// program to find volume of a cylinder

int main()
{
    float PI = 22.0 / 7.0;
    float r;
    float h;
    printf("Enter the radius: ");
    scanf("%f", &r);
    printf(" value of r : %f \n", r);
    printf("Enter the height: ");
    scanf("%f", &h);
    printf(" value of h : %f \n", h);
    printf("The volume of your cylider is: %f", PI * r * r * h);
    return 0;
}