#include<stdio.h>
int main()
{
	int n=5;
	
	for(int i=n;i>=1;i--)
	{
		for(int j=i;j<=n;j++)
		{
		 printf(" ");
}
		 for(int k=5;k>=n+1-i;k--)
		 {
		 	printf("* ");
		 }
	
		printf("\n");
	}
}
