#include<stdio.h>
int main()
{
    int a=1234;
	
	int a1=a%10;
	printf("%d\n",a1);
	   a=a/10;
	   
	int a2=a%10;
	printf("%d\n",a2);
	   a=a/10;
	   
	int a3=a%10;   
    printf("%d\n",a3);
        a=a/10;
    
    int a4=a%10;
    printf("%d\n",a4);
    
    int a5=(a1+a2)*(a3+a4);
    printf("%d\n",a5);
}
