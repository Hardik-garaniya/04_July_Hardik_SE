// 3. WAP to take 10 no. Input from user find out below values

// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd numbers

#include<stdio.h>

void main(){

    int num, evencount = 0, oddcount = 0;
    int evensum = 0, oddsum = 0;
    
    printf("Enter 10 number :\n");
    for(int i = 0; i < 10; i++){
    scanf("%d", &num);
    if(num % 2 == 0)
    {
    
        evencount++;
        evensum += num;
    
    }
    else
    {
    
      oddcount++;
      oddsum += num;
    
    }
    
    
    }
    
        printf("Even numbers: %d\n", evencount);
        printf("Odd numbers: %d\n", oddcount);
        printf("Sum of even numbers: %d\n", evensum);
        printf("Sum of odd numbers: %d\n", oddsum);

}
