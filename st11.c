#include<stdio.h>
#include<string.h>
struct book
{
char booktitle[25];
char author[25];
char place[25];
};
struct book read()
{
struct book note;
printf("enter title of book:");
scanf("%s",note.booktitle);
printf("enter name of book author:");
scanf("%s",note.author);
printf("enter place of book published:");
scanf("%s",note.place);
return note;
}
void display(struct book a)
{
printf("title:");
puts(a.booktitle);
printf("author:");
puts(a.author);
printf("place:");
puts(a.place);
}
void main()
{
struct book b1;
b1=read();
display(b1);
}
