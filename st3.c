#include<stdio.h>
#include<string.h>
void charremove(char* str,int pos,int n,int len)
{char new[25];
int i,j,k=0;
for(i=0;i<len;i++)
{
if(i<pos-1)
{
new[k++]=str[i];
if(i==(pos-2))
	{	
	for(j=pos;j<pos+n;j++)
		i++;
	}
}
else
{
new[k++]=str[i];
}
}
puts(new);
}
void main()
{
char str[25];
int pos,n,len;
printf("enter the string:");
scanf("%s",str);
printf("enter the position and number of characters to be removed:");
scanf("%d %d",&pos,&n);
len=strlen(str);
if((pos<(len-1))&&((pos+n)<len))
{
charremove(str,pos,n,len);
}
else
{
printf("characters cannot be removed");
}
}



