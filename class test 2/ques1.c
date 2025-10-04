#include <stdio.h>

int main() {
     int u=30,ebill;
     if(u>=1 && u<=50){ 
         ebill= 30*u;
         printf("%d",ebill);}
         
         else 
         if(u>=51 && u<=150) {
             ebill=40*u;
            printf("%d",ebill);}
            
            else
             if(u>150) {
             ebill=50*u;
            printf("%d",ebill);}
             else 
             {
                 printf("invalid ");
             }
         }
