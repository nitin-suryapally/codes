#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int num1,r;
    do
    {
        int number;
        srand(time(0));
        number = rand() % 10 + 1; // generates random number between 1 to 10
        printf("%d \n", number);
        printf("enter the number :");
        scanf("%d", &num1);

        

        
        

            
            
        
        printf("to play again enter 0\n");
        scanf("%d",&r);

    }
    while(r==0);
    return 0;
}