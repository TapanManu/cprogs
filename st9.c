#include<stdio.h>
void compare(char* ch,char*str)
{int flag=0;
	while(*ch==*str)
	{
	ch++;
	str++;
	if((*ch=='\0') && (*str=='\0'))
		{
		flag=1;
		break;
		}
	}
if(flag==0)
{
printf("the strings are unequal");
}
else
{
printf("the strings are equal");
}
}
void main()
{
char ch[25],str[25];
printf("enter string1:");
scanf("%s",ch);
printf("enter string2:");
scanf("%s",str);
compare(ch,str);
}


