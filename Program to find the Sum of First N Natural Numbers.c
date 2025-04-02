#include <stdio.h>

/* Program to find the Sum of First N Natural Numbers

 Method 1: Iterative 
        For an input n
        Create variable sum = 0
        Run a for loop in iteration (I) from 1 -> n
        Each time adding I to sum
        Print the sum value after the loop terminates      */
        
int main()
{
    int n;
    scanf("%d", &n);
    int sum =0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
} 


/* Method 2: Formula
        For an input n
        Create variable sum = 0
        Use formula sum =  n(n+1)/2
        Print the sum value
        
        
Code:
 #include<stdio.h>
 int main(){
     int n;
     scanf("%d", &n);
     int sum = n*(n+1)/2;
     printf("The sum is %d",sum);
     return 0;
 }       */
 