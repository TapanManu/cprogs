#include<stdio.h>
struct complex
{
float real;
float img;
}num1,num2;
void writecomp(struct complex);
struct complex readcomp()
{struct complex a;
printf("enter real part number");
scanf("%f",&a.real);
printf("enter imaginary part number");
scanf("%f",&a.img);
return a;
}
void writecomp(struct complex a)
{
printf("%f+i%f",a.real,a.img);
}
void add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;
printf("the sum is:");
writecomp(c);
}
void sub(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real-b.real;
c.img=a.img-b.img;
printf("the difference is:");
writecomp(c);
}
void mult(struct complex a,struct complex b)
{
struct complex c;
c.real=((a.real)*(b.real))-((a.img)*(b.img));
c.img=((a.img)*(b.real))+((a.real)*(b.img));
printf("the product is:");
writecomp(c);
}
void main()
{
printf("enter two numbers:");
num1=readcomp();
printf("\n");
num2=readcomp();
printf("\n");
writecomp(num1);
add(num1,num2);
printf("\n");
sub(num1,num2);
printf("\n");
mult(num1,num2);
printf("\n");
}

