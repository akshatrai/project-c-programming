#include<stdio.h>
int main()
{
float a,b,c,d,e,f,g,h,i,j,k;
//part a
printf("enter your angles of triangle\n");
scanf("%f %f %f",&a,&b,&c);
d=a+b+c;
if ((d==180)&&(a>0)&&(b>0)&&(c>0))
{
printf("your triangle is valid\n");}
else
{printf("triangle is invalid\n");}
//part b
printf("enter the sides of your triangle\n");
scanf("%f %f %f",&e,&f,&g);
if ((e+f>g)&&(e+g>f)&&(f+g>e))
{
printf("your triangle is valid\n");}
else
{printf("triangle is invalid\n");}
//part c
printf("enter sides of triangle for type test\n");
scanf("%f %f %f",&i,&j,&k);
if ((i==j)&&(j==k))
{
    printf("your triangle is equilateral");
}
else if ((i==j)||(i==k)||(j==k))
{
    printf("your triangle is isosceles");
}
else
{printf("your triangle is scalene");}
return 0;
}
