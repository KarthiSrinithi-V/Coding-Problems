//Program to check whether the given number is prime or not

#include <stdio.h>  

int main()
{
    int num,i, count = 0;
    scanf("%d", &num);
    
    // checking the number of divisors b/w 1 & num
    for(i = 1; i <= num; i++) {
      if(num % i == 0) 
        count += 1;
    } 
     // 0 & 1 are not prime number
       if(num == 0 || num == 1)
         printf("%d is not prime", num); 
         
     //if number of divisors are > 2 then not prime else prime 
       else if(count > 2) 
          printf("%d is not prime", num);
          
       else
         printf("%d is prime", num);

  return 0;
}