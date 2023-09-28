#include <stdio.h>

int main()
{
    //FOERMAT SPECIFIER % = defines and farmats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = interger

    // %.l = decimal precision
    // %l = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1: $%.2f\n", item1);
    printf("item 2: $%.2f\n", item2);
    printf("item 3: $%.2f\n", item3);

    char name1[] = "khadija";
    char name2[] = "ibrahim";
    char name3[] = "hamisu";

    printf("my name is %s\n", name1);
    printf("my middle name is %s\n", name2);
    printf("my surname is %s\n", name3);

    
    
    

    return 0;
}