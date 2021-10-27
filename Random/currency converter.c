#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float US = 9100, THB = 310;
	float money;
	printf("WELCOME TO MY PROGRAM!!!!\n");
    printf("Enter your money: ");
    scanf("%f",&money);
    							//input value
    printf("%.fKip = %.2f USD\n", money, money / US);
    printf("%.fKip = %.2f baht\n", money, money / THB);
    							//output result
    return 0;
}
