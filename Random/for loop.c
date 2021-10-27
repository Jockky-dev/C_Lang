#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i,j;
    for(i=1;i<=9;i+=2){
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(i=9;i>=1;i-=2){
        for(j=i;j>=1;j--)
        printf("*");
        printf("\n");
    }
}
