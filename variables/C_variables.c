#include <stdio.h>

int main()
{
    // variables = Allocated space in memory to store a value.
    //             We refer to a variable's name to access the stored value.
    //             That variable now behaves as if it was the value it contains.
    //             But we need to declare what type of data we are storing.

    int n; //declaration
    n =123; //initialization
    int y = 322; //declaration + initialization

    int age = 31; // interger
    float gpa = 4.8; //floating point number
    char grade = 'B'; //char stored a single character
    char name[] = "veera"; //array of characters

    printf("i am %d years old\n", age);
    printf("hello %s\n", name);
    printf("my average grade is %c\n", grade);
    printf("my gpa is %f\n", gpa);

    return 0;


}