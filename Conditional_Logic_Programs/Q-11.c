// 11.WAP to find number is even or odd using ternary operator


#include<stdio.h>

void main(){

int a;

printf("Enter even and odd number : ");
scanf("%d", &a);

a = (a % 2 == 0)?  printf("%d odd number.", a) :printf("%deven number.", a);



}