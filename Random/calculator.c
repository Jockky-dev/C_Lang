#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int choice;
    double num1, num2;

    printf("############################################\n");
    printf("#           Please select choice            \n");
    printf("############################################\n");
    printf("#       1. Plus         (+)         #\n");
    printf("        2. Minus        (-)         #\n");
    printf("        3. Multiply     (*)         #\n");
    printf("        4. Divide       (/)         #\n");
    printf("        5. Power                    #\n");
    printf("############################################\n");
    printf("\n\t select :");
    scanf("%d", &choice);
    printf("\nEnter number 1: ");
    scanf("%lf", &num1);
    printf("\nEnter number2: ");
    scanf("%lf", &num2);

    switch (choice)
    {
    case 1:
        printf("%3.2lf + %3.2lf = %3.2lf", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%3.2lf - %3.2lf = %3.2lf", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%3.2lf * %3.2lf = %3.2lf", num1, num2, num1 * num2);
        break;
    case 4:
        printf("%3.2lf / %3.2lf = %3.2lf", num1, num2, num1 / num2);
        break;
    case 5:
        printf("%3.2lf power %3.2lf = %3.2lf", num1, num2, pow(num1, num2));
        break;
    default:
        printf("Please select choice 1-5 only\n");
    }
}
