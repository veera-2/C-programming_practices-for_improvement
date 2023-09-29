#include <stdio.h>

int main()
{
    /**
     * AUGMENTED ASSIGNMENT OPERATORS :
     * it is used to replace a statement where an operator
     * takes a variable as one of its arguments
     * and then assigns the result back to the same variables
     * x = x +1
     * x+ =1
    */

   // in a layman language: augmented assignment are like writing the short form of an arguments in oprators.

   int x = 100;

   x = x + 2;
   //x+=2;

   // x = x - 3;
   // x-=3;

    //x = x * 4;
   // x*=4;

   // x = x / 5;
    // x/=5;

     //x = x % 2;
    // x%=2;

   printf("%d\n", x);


   return 0;
}