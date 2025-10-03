#include<stdio.h>
int main()
{
	double price=500,discount,finalprice;
	char student ='y';
	
	
		if(student =='y')
		{
			if(price>500){
			
			discount = 0.20*price;
			finalprice= price-discount;
			printf("discount=%.2f\n finalprice=$.2f",discount,finalprice);
        }
		else{
		
         discount = 0.10*price;
			finalprice= price-discount;
			printf("discount=%.2f\n finalprice=%.2f",discount,finalprice);
		}
			}
		else {
			
			if(price>600){
			
			discount = 0.15*price;
			finalprice= price-discount;
			printf("discount=%.2f\n finalprice=%.2f",discount,finalprice);
		}
			else{
			
			discount=0;
			finalprice= price-discount;
			printf("discount=%.2f\n finalprice=%.2f",discount,finalprice);
		}}
	}
