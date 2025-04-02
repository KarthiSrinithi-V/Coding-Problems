#include <stdio.h>

// Program to check whether the given number is positive or negative

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n>0)
    {
        printf("The given number is positive.\n");
    }
    else if(n<0)
    {
        printf("The given number is negative.\n");
    }
    else
    {
        printf("The given number is zero.\n");
    }
}