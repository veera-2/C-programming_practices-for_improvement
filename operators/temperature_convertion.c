#include <stdio.h>
#include <ctype.h> //this header file declares a set of functions to classify (and transform) individual characters.

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C')
    {
       printf("Enter the temp in Celsius: \n");
       scanf("%f", &temp);
       temp = (temp * 9 / 5) + 32;
       printf("The temp in fahrenheit is: %.1f\n", temp);
    }
    else if(unit == 'F')
    {
        printf("Enter the temp in fahrenheit: \n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in celsius is: %.1f\n", temp);
    }
    else
    {
      printf("is not a valid unit of measurement\n");

    }



    return 0;
}