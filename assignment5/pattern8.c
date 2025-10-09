#include<stdio.h>
int main()
{
	int n=4;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		 printf("*");
		}
		printf("\n");
	}
	
	for(int p=1;p<n;p++){
		for(int m=p;m<n;m++)
		{
			printf("*");
			
		}
	printf("\n");
}}
