#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
char ch;
if(*str!='\0')
{
ch=*str;
str++;
reverse(str);
printf("%c",ch);
}
}
void main()
{
char str[25];
scanf("%s",str);
reverse(str);
}
