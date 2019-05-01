#include<stdio.h>
#include<string.h>
void main()
{
char str[25],ch1[25],ch2[25],temp[25],new[50];
int pos,i,k=0,j,flag=0,p,l,n1,n2,result;
printf("enter the string");
scanf("%s",str);
printf("enter the substring to be searched");
scanf("%s",ch1);
printf("enter the substring to be replaced");
scanf("%s",ch2);
n1=strlen(ch1);
n2=strlen(ch2);
l=strlen(str);
for(i=0;i<l;i++)
{
if((n1+i)<l)
{
	for(j=i,k=0;j<(n1+i);j++)
	{
		temp[k++]=str[j];
	}
	result=strcmp(temp,ch1);
	if(result==0)
	{
		pos=i;
		printf("%d",pos);
		break;
	}
}
else
{
printf("word not found");
}
}
for(i=0,k=0;i<pos;i++,k++)
{
new[k]=str[i];
}
for(k=pos,j=0;k<(n2+pos);j++,k++)
{
new[k]=ch2[j];
}
for(i=pos+n1-1,j=n2+pos;str[i]!='\0';i++,j++)
{
new[j]=str[i];
}

puts(new);
}


	


