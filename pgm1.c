#include<stdio.h>
#include<string.h>
//sorts names in lexicographic order
void lexicographic(char[][25],int);
void main()
{
char str[25][25];
int i,n;
printf("\t\tenter the maximum number of names:");
scanf("%d",&n);
printf("\t\tenter the names:");
for(i=0;i<n;i++)
{	printf("%d:",i+1);
	scanf("%s",str[i]);
}
lexicographic(str,n);
printf("\t\tdisplaying strings in lexicographic order"); 
for(i=0;i<n;i++)
{
printf("\n");
printf("%d:",i+1);
puts(str[i]);
}
}
void lexicographic(char str[][25],int n)
{
int i,j;
char temp[25];
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if((strcmp(str[i],str[j]))>0)
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
		}
	}
}
}	
