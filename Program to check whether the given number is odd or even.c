#include <stdio.h>

// Program to check whether the given number is odd or even

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("The given number is Even.\n");
    }
    else
    {
        printf("The given number is Odd.\n");
    }
}