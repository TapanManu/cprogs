#include<stdio.h>
void main()
{
FILE*fp,*fp1;
fp=fopen("text","r");
fp1=fopen("write","w");
char ch;
while((ch=getc(fp))!=EOF)
{
	if((isalpha(ch))!=0)
		putc(toupper(ch),fp1);
	else
		putc(ch,fp1);
}
fclose(fp);
fclose(fp1);
}
