#include <stdio.h>

void birthday(char *name, int age) //funtion that you create to better make repeating easier or many other things
{
    printf("Happy birthday dear %s!\n", name);
    printf("You are %d years old!\n", age);
}

int main()
{
    char *name = "khadija";
    int age = 21;
    birthday(name,  age);

    return 0;
}