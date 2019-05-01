#include<stdio.h>
#include<string.h>
int palindrome(char* str)
{
int i;
int n=strlen(str);
int flag=0;
for(i=0;i<n/2;i++)
{
if(str[i]!=str[n-i-1])
	{
	flag=1;
	break;
	}
}
return flag;
}
void main()
{
char str[20][20],largeword[25],smallword[25];
int i,n,l=0,large=0,small=20,flag=0;
printf("enter no of words");
scanf("%d",&n);
printf("enter the string");
for(i=0;i<n;i++)
	scanf("%s",str[i]);
for(i=0;i<n;i++)
	{
	if(palindrome(str[i])==0)
	{flag=1;
	l=strlen(str[i]);
		if(l>large)
		{
		large=l;
		strcpy(largeword,str[i]);
		}
		if(l<small)
		{
		small=l;
		strcpy(smallword,str[i]);
		}
	}
	}
if(flag==1)
{
printf("the largest palindrome is :");
puts(largeword);
printf("the smallest palindrome is:");
puts(smallword);
}
else
printf("no palindrome is present");
}



