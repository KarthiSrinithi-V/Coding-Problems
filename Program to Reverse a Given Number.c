// C Program to Reverse a Given Number 

#include<stdio.h>
int main(){
    int n, rem;
    int reverse =0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){                                       //while(n>0)
        rem = n%10;
        reverse = reverse * 10 + rem;
        n = n/10;                 
    }
    printf("The reversal of the given number is %d", reverse);
    return 0;
}