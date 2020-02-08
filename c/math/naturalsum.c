#include<stdio.h>
int sum(int num)
{
if(num>0)
{
return num+sum(num-1);
}
else
return 0;
}
void main()
{
int n,total;
printf("enter number");
scanf("%d",&n);
total=sum(n);
printf("sum:%d",total);
}

