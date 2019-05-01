#include<stdio.h>
#include<string.h>
struct student
{
int rollno;
char name[25];
float cgpa;
}st[50];
struct student enter()
{struct student ob;
printf("enter roll number:");
scanf("%d",&ob.rollno);
printf("enter name:");
scanf("%s",ob.name);
printf("enter cgpa:");
scanf("%f",&ob.cgpa);
return ob;
}
void display(struct student ob)
{
printf("\troll no:%d\n",ob.rollno);
printf("\tname:");
puts(ob.name);
printf("\tcgpa:%f\n",ob.cgpa);
}
void main()
{
FILE *fp;
int i,n,flag=0;
char x[25];
fp=fopen("student","wb");
printf("enter number of students in database");
scanf("%d",&n);
for(i=0;i<n;i++)
{
st[i]=enter();
fwrite(&st[i],sizeof(st[i]),1,fp);
}
fclose(fp);
fp=fopen("student","rb");
printf("enter name of student to be searched");
scanf("%s",x);
for(i=0;i<n;i++)
{fread(&st[i],sizeof(st[i]),1,fp);
if(strcmp(st[i].name,x)==0)
{
flag=1;
display(st[i]);
}

}
if (flag==0)
printf("student not in database");
fclose(fp);
}



