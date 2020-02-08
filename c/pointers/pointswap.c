#include<stdio.h>
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
void main()
{
int x,y;
printf("enter values of x and y");
scanf("%d %d",&x,&y);
swap(&x,&y);
printf("new values of x:%d and y:%d",x,y);
}



