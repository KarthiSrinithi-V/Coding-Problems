//Program to print 2D Array

#include<stdio.h>
int main(){
    int arr[10][10];
    int n,m;
    scanf("%d", &n);
    scanf("%d",&m);
    for(int i=0;i<n;i++){            //input the array elements
        for(int j=0;j<m;j++){
            
        scanf("%d", &arr[i][j]);
        }
    }
   for(int i=0;i<n;i++){              //printing the 2d array
       for(int j=0;j<m;j++){
           
           printf("%d ", arr[i][j]);
       }
        printf("\n");
   }
  
    return 0;
}