#include <stdio.h>

float calc_area(float radius);
float calc_circumference(float radius);

const double PI = 22.0 / 7.0;

int main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = calc_area(radius);
    float circumference = calc_circumference(radius);

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}

float calc_area(float radius)
{
    return PI * radius * radius;
}

float calc_circumference(float radius)
{
    return 2 * PI * radius;
}