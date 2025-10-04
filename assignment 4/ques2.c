#include<stdio.h>
void main()
{
	
	int i,j,n=200,flag;
	
	
	
	for(i=2;i<=n;i++)
	{
		flag=1;
		for( j=2;j<i;j++)
		{
		
			if(i%j==0){
			
			  flag=0;
			  break;
		}
	}
				if(flag==1)
				printf("%d is a prime number\n",i);
		
		
	}
}
