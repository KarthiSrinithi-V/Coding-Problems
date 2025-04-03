//Program to find the Sum of numbers in a given range

#include<stdio.h>
int main(){
    int a,b,i,sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        sum = sum+i;
    }
    printf("The sum of numbers in the given range is %d",sum);
    return 0;
}