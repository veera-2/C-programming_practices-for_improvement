#include <stdio.h>
#include <stdbool.h>

int main()
{
    /** DATA TYPES = A data type is a classification of data 
     * which tells the compiler or interpreter how the programmer intends to use the data.
     *  Most programming languages support various types of data,
     *  including integer, real, character or string, and Boolean.
     */

    char a = 'B';                      //single character it space holder is %c
    char name[] = "veera";            //arrays of character it space holder is %s

    float gpa = 4.52;                //it store decimal number 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.12456789325674;     // it stored even more decimal numbers 8 bytes(64 bits) 15 - 16 digits %lf

    bool e = false;                   //it use for working binary 1 byte (logical true or false) %d

    char f = 120;                    // 1 byte (-128 to +127) %d or %c 
    unsigned char g = 255;           // 1 byte (0 to +255) %d or %c

    short int h = 32767;             //It is lesser in size than the int by 2 bytes
                                    //so can only store values from (–32,768 to 32,767) %d
    unsigned short int i = 65535;    //ubut it can’t store negative values like signed int.
                                   //but it can’t store negative values like signed int.(0 to +65,535) %d

    int j = 2147483647;             // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned  int k = 4294967295;    // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;            //8 bytes (-9 quintillion +9 quintillion)%lld
    unsigned long long int m = 18446744073709551615u;  // 8 bytes (0 to +18 quintillion) %llu  add (u) at the end of the variables
    


    int age = 31;                   //it stored only interger it space holder is %d

    printf("%f\n", gpa);
    printf("%0.15lf\n",d);
    printf("%d\n",e);
    printf("%c\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",k);
    printf("%lld\n",l);
    printf("%llu\n",m);

       return 0;

}