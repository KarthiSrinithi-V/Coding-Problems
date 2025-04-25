// C Program to find Sum of Digits of a Number 

#include<stdio.h>
int main(){
    int n;
    int sum =0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        sum = sum + n%10;          //Extracting the last digit of the number and adding it to the sum
        n = n/10;                 //Removing the last digit
    }
    printf("The sum of digits of the number is %d", sum);
    return 0;
}