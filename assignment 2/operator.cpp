
#include<stdio.h>
int main()
{
	int a=4,b=6,c;
	int ch= 3;
	
	if(ch==1)
	{
	  c=a+b;
	 
	  printf("c=%d",c);
	 }
	 else 
	 if(ch==2){
	 
	 c=a-b;
	 printf("c=%d",c);
	 }
	 else
	  if(ch==3)
	  {
	 
	 c=a*b;
	 printf("c=%d",c);
	 }
	 else 
	 if(ch==4)
	 {
	 
	 c=a/b;
	 printf("c=%d",c);
}
	 else
	 {
	 
	 printf("invalid");}
}
