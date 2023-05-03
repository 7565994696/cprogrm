#include<stdio.h>

int main ()
{

int num,r,product=1;
printf("enter num\n");
scanf("%d",&num);
while (num>1)
{
    r=num%10;
    product=product*r;
    num=num/10;}
     
      printf("product of %d",product);
return 0;

}