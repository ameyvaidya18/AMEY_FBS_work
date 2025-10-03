#include<stdio.h>
void main()
{
	int a= 55;
	if(a%3==0 && a%5==0)
	printf("no. is divisible by both");
	else if(a%3==0)
	printf("no. is divisible by 3");
	else if(a%5==0)
	printf("no. is divisible by 5");
	else 
	printf("undefined");
}
