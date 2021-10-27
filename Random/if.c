#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age;
    printf("How old are you? :");
    scanf("%d",&age);
    if(age<18){
        printf("You are less than 18 years old\n");
        printf("You are young\n");
    }
    printf("You are %d years old", age);
}
