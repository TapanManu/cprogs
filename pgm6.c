#include<stdio.h>
void main()
{
FILE*fp;
fp=fopen("test","rb");
int i,j,a[3][3];

for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
fread(a,sizeof(a),1,fp);
printf("%d\t",a[i][j]);
}
}
fclose(fp);
}
