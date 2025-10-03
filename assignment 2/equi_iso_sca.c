#include<stdio.h>
void main(){

int a=5,b=7,c=5;
if(a==b&&b==c)
printf("Equilateral triangle");
else if(a==b||b==c||a==c)
printf("Isosceles trianglre");
else
printf("Scalene triangle");
}
