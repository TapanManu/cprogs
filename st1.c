#include<stdio.h>
#include<string.h>
void main()
{
char str[25],ch[25],new[50];
int pos,i,k=0,j;
printf("enter the string");
scanf("%s",str);
printf("enter the position");
scanf("%d",&pos);
printf("enter the substring");
scanf("%s",ch);
for(i=0;i<strlen(str);i++)
{	
	if(i<pos)
	{	new[k++]=str[i];
		if(i==(pos-1))
		{
			for(j=0;j<strlen(ch);j++)
			{
				new[k++]=ch[j];		
			}
		}
	}
	else 
	{	new[k++]=str[i];
	}
}
puts(new);
}
		



