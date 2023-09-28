#include <stdio.h>

int main()
{
    //ARITHMETIC OPERATORS

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus) it is use fr displaying the remender of a value
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    int z = x + y;
    float d = x / (float) y; // i cast my deviser as a float or double instead of changing the interger

    printf("%d\n", z);
    printf("%.1f\n", d);

    int v = x % y;


    printf("%d\n", v);

    x++;

    printf("%d\n", x);

    y--;

    printf("%d",y);


    return 0;
}