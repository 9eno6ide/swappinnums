
 #include<stdio.h>  
 int main()    
{    
int a=7, b=13;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=20 (7+13)    
b=a-b;//b=7 (20-13)    
a=a-b;//a=13 (20-7)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
