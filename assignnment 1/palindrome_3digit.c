#include<stdio.h>
void main()
{
	int no =188;
	int n1, n2,n3,rev;
	int q1;
	n1=no%10;
	q1=no/10;
	n2=q1%10;
	n3=q1/10;
	rev = n1*100+n2*10+n3;
	
			if(no==rev)
			{
			
		printf("palindrome");
}
	else
{
	
	printf(" not palindrome");
}

}
