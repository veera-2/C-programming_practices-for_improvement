#include <stdio.h>
#include <string.h> // this header is for string

int main()
{
    //printf("i like chocolate\n");

    char name[25]; //set byte to 25 characters,if more than that is it will overflow
    int age;

    printf("what is your name\n");
    //scanf("%s", &name);        //scanf cant read white spaces
    fgets(name, 25, stdin); //we use this if we want any white space in between our variables, but it coes with a new line character
    name[strlen(name)-1] = '\0'; //this is for getting rid of the new line character that was form in fgets


    printf("how old are you\n");  // printf() functions are use to display command while
    scanf("%d", &age);                   // scanf() function are use to read input, its the inverse of printf() functions.

    printf("hello %s, how are you\n", name);

    printf("i am %d years old\n", age);

    return 0;
}