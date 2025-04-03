//Greatest of the two numbers 

#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1==n2){
        printf("Both numbers are equal");
    }
    else if(n1>n2){
        printf("n1 is the greatest number");
    }
    else{
        printf("n2 is the greatest number");
    }
    return 0;
}