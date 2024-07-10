/*write a menu driven program with the following options  
1)addition
2)odd even
3)print n natural number*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int choice,a,b,s;
   while(1)
   {
   
    printf("\n 1 - ADDITION");
    printf("\n 2 - ODD-EVEN");
    printf("\n 3 - NATURAL NUMBERS");
    printf("\n 4 - EXIT");

    printf("\n enter ur choice - ");
    scanf("\n %d",&choice);
    switch (choice)
    {
        case 1:
        printf("\n enter 2 numbers  ");
        scanf("\n %d \n %d",&a,&b);
        s=a+b;
        printf("\n sum is = %d",s);
        break;

        case 2:
        printf("\n enter any number ");
        scanf("\n %d",&a);
        if(a%2==0)
        printf("\n number is even ");
        else
        printf("\n number is odd ");
        break;

        case 3:
        printf("\n enter any number ");
        scanf("\n %d",&a);
        for(b=1;b<=a;b++)
              printf("\n %d",b);
        break;

        case 4:
                printf("Exiting program.\n");
                exit(0); // Terminate the program

        default:{
            printf("invalid choice");
        }



        }
    }
}