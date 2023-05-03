
#include<stdio.h>

int main ()
{

int num,count=0;
printf("enter num\n");
scanf("%d",&num);
while (num>0)
{
    num=num/10;
    count++;
}
printf("total no %d digits",count);
    return 0;

}