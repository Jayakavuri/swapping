#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;   //a=10+20 
b=a-b;    //b=30-20 i.e b=10
a=a-b;   //a=30-10 i.e a=20
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
