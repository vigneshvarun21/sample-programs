#include <stdio.h>
int main()
{ 
double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number <= 3)
    {
        if (number == 3)
            printf("You entered 3");
        else
            printf("You entered a negative number");
    }
    else
        printf("You entered a positive number");
    return 0;
}
