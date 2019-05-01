#include<stdio.h>
int klargearray(int*,int,int);
void main()
{
int i,n,k,a[25],large;
printf("\t\tenter the size:");
scanf("%d",&n);
printf("\t\tenter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\t\tenter the value of k for kth largest element:");
scanf("%d",&k);
if(k<=n)
{
large=klargearray(a,n,k);
printf("the %d largest element is %d",k,large);
}
else
printf("does not exist");
}
int klargearray(int *a,int n,int k)
{
int i,j,l,temp,large,klarge;
klarge=a[0];
for(l=1;l<k;l++)
{
	large=0;
	for(i=0;i<n;i++)
	{
		if(large<=klarge)
		{		
		for(j=i+1;j<n;j++)
		{	
			if(a[j]>large)
			{	temp=a[j];
				a[j]=large;
				large=temp;
			}
					
		}
		}		
	}
	klarge=large;
}
return klarge;
}
	
