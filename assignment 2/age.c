#include<stdio.h>
void main()
{
	int age = 98;
	
	if(age<=12)
	{
		printf("child");
	}
	else{
		if(age<=19&&age>=12)
		{
		printf("teenager");
		}
		else
			if(age>=20&&age<=59)
	{
		printf("adult");
	}
	else
			if(age>=60)
	{
		printf("senior");
}
	}
}
