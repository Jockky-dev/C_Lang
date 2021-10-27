#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int number;
    printf("Guess number: ");
    scanf("%d",&number);
    while(number != 3){
        printf("you are wrong try again\n");
        printf("Guess number: ");
        scanf("%d", &number);
    }
    printf("You win! Congratulation\n");
}
