#include<stdio.h>
int main()
{
int a;
float d,b,c,e,f,g,h,i,j,k;
printf("input your basic salary\n");
scanf("%d",&a);
if (a<=10000)
{
b=a*0.2;
c=a*0.8;
d=b+c+a;
printf("your gross income is %f",d);
}
else if (a<=20000)
{
e=a*0.25;
f=a*0.9;
g=e+f+a;
printf("your gross income is %f",g);
}
else if (a>20000)
{
    i=a*0.3;
    j=a*0.95;
    k=i+j+a;
    printf("your gross income is %f",k);
}
return 0;
}
