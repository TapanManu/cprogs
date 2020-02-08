#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
fp=fopen("text","w");
char ch;
printf("enter the sentence");
while((ch=getchar())!=EOF)
{if (ch=='\n')break;
putc(ch,fp);
}
fclose(fp);
fp=fopen("text","r");
while((ch=getc(fp))!=EOF)
{
printf("%c",ch);
}
}
