#include <stdio.h>

int main()
{
    // program to calculate the circumference and the area of radius of a circle using user input

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("enter radius of a circle\n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius; // formular for  circumference of aradius
    area = PI * radius * radius;     // formular for area of a radius


    printf("circumference: %lf\n", circumference);
    printf("area: %lf\n", area);



    return 0;
}