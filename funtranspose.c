#include<stdio.h>
void transpose(int a[][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{printf("\n");
for(j=0;j<n;j++)
{
printf("\t%d",a[j][i]);
}
}
}
void matrix(int a[][10],int p,int q)
{
int i,j;
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&a[i][j]);
}
}
}
void main()
{
int mat[10][10],m,n;
printf("enter the order of the matrix");
scanf("%d %d",&m,&n);
printf("enter the matrix");
matrix(mat,m,n);
printf("display the transpose matrix");
transpose(mat,m,n);
}

