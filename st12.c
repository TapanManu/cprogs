#include<stdio.h>
float avg(int *arr,int n)
{
float sum=0;
int count=1;
while(count)
{
	sum+=(*arr);
	arr++;              //iterate the position
	if(count==n)
		break;
	count++;
}
return (sum/n);
}
void get(int *arr,int n)
{
int i;
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
}	
void main()
{
int arr[10],n;
float avrg=0;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the array");
get(arr,n);
avrg=avg(arr,n);
printf("the average is:%f",avrg);
}




		
