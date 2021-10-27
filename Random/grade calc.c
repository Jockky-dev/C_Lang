#include <stdio.h>
#include <math.h>
int main() {
	int score;
	printf("WELCOME TO *WHAT IS YOUR GRADE* PROGRAM!!!!\n");
    printf("Please enter your score: ");
    scanf("%d", &score);
    
    if (score >= 91)
        printf("\tYou get A!\n");
        			
    else if(score >= 86)
    	printf("\tYou get B+!\n");
    				
    	else if(score >= 75)
    	printf("\tYou get B!\n");
    				
    		else if(score >= 71)
    		printf("\tYou get C+!\n");
    				
    			else if(score >= 65)
    			printf("\tYou get C!\n");
    			
    				else if(score >= 56)
                    printf("\tYou get D+\n");
                    
                        else if(score >= 50)
                        printf("\tYou get D\n");
                        
                            else if(score >= 0)
                            printf("\tYou get F\n");
    printf("SEE YOU NEXT EXAM!");
}
