#include <stdio.h>
int main()
{
     int num;
     scanf("%d",&num);
     switch(num+2)
     {
         case 1:
           printf("Case1: Value is: %d\n", num);
         case 2:
           printf("Case1: Value is: %d\n", num);
         case 3:
           printf("Case1: Value is: %d\n", num);
         default:
           printf("Default: Value is: %d\n", num);
    }
    return 0;
}
