#include<stdio.h>
void main()
{
	int marks = 98;
	
	if(marks>=75)
	{
		printf("distinction");
	}
	else{
		if(marks>=65)
		{
		printf("first class");
		}
		else
			if(marks>=55)
	{
		printf("second class");
	}
	else
			if(marks>=45)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	}
}
