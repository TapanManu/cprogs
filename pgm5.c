#include<stdio.h>
#include<string.h>
void main()
{
FILE*fp;
fp=fopen("test","wb");
int a[3][3],i,j;
printf("enter the array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
fwrite(a,sizeof(a),1,fp);
}
}
fclose(fp);
fp=fopen("test","rb");
printf("display the array");
for(i=0;i<3;i++)
{printf("\n");
for(j=0;j<3;j++)
{
fread(a,sizeof(a),1,fp);
printf("%d\t",a[i][j]);
}
}
fclose(fp);
}










