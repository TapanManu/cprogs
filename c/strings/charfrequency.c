#include<stdio.h>
#include<string.h>
//count character frequency
void main()
{char str[25];
int i,j,count;
printf("enter the mainstring");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{	count=1;
	for(j=i+1;str[j]!='\0';j++)
	{
		if(str[i]==str[j])
		{
			count++;
			str[j]='$';
		}
	}
	if(str[i]!='$')
	printf("count of %c : %d\n",str[i],count);
}

}
