#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if(age >= 20)
    {
        printf("You are now signed up!\n");
    }
    else if(age == 0)
    {
        printf("You can't sign uo! You were just born!\n");
    }
    else if(age < 0)
    {
        printf("You haven't been born yet!\n");
    }
    else
    {
        printf("You are to young to sign up!\n");
    }
    

    return 0;
}