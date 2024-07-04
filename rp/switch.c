#include <stdio.h>
 
int main()
{
    int a=10;
 
    switch (a)
    {
    case 1:
        printf("Statement 1");
        break;
 
    case 2:
        printf("Statement 2");
        break;
 
    default:
        printf("No valid i to switch to.");
        break;
    }
    return 0;
}
