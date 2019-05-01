#include<stdio.h>
#include<string.h>
void main()
{
char str[20][20];
int i,j,k,n;
printf("enter the no of words");
scanf("%d",&n);
printf("enter the sentence");
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(str[i],str[j])==0)
{
for(k=j;k<n-1;k++)
strcpy(str[k],str[k+1]);
n--;
}
}
}
for(i=0;i<n;i++)
puts(str[i]);
}

