#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter marks in physics\n");
scanf("%d",&a);
printf("enter marks in mathematics\n");
scanf("%d",&b);
printf("enter marks in chemistry\n");
scanf("%d",&c);
d=a+b+c;
if ((a>=55)&&(b>=65)&&(c>=60))
{
printf("the candidate is eligible for admission");
}
else if (a+b+c>=190)
    {
printf("the candidate is eligible for admission");
}
else if (a+c>=130)
    {
printf("the candidate is eligible for admission");
}
else
{
printf("the candidate is not eligible");
}
return 0;
}
