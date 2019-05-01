#include<stdio.h>
#include<string.h>
void reverse(char* str,int n)
{
int i;
char temp;
for(i=0;i<n/2;i++)
{
temp=*(str+i);
*(str+i)=*(str+n-i-1);
*(str+n-i-1)=temp;
}
}

void main()
{
char str[25];
int i,n;
printf("\t\tenter the content:");
scanf("%s",str);
n=strlen(str);
reverse(str,n);
printf("the reversed string is:");
puts(str);
}


