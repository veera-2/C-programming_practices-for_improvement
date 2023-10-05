#include <stdio.h>

int main()
{
    //Switch = A more efficient alternative to using many "else if " statements
    //         allows a value to be tested for equality against many cases

    char grade;

    printf("Enter a letter grade: \n");
    scanf("%c", &grade);

    switch(grade)  // USING THE "SWITCH" STATEMENT INSTEAD OF USING ALOT OF "ELSE IF" STATEMENT
    {
    case 'A':
        printf("Perfect!\n");
        break;                 // IT IS VERY IMPORTANT TO USE THE "BREAK" IS NOT IT WILL CONTINUE TO EXICUTE ALL THE COMMAND
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("you did ok!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F' :
        printf("YOU FAILED!\n");
        break; 
    default:
        printf("Please enter only valid grades!\n");                      
    }

    return 0;
}