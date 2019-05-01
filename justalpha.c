#include<stdio.h>
#include<string.h>
void main()
{
char str[25],ch[25];
int i,j=0;
printf("enter the string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(isalpha(str[i])!=0)
{
ch[j++]=str[i];
}
}
puts(ch);
}


	


