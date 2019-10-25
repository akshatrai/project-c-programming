#include <stdio.h>
#include<stdlib.h>
int main()
{
int
i,d1,r,pincode,num1,street,num2,sum,diff,prod,div,remain,a,b,c,d,e,f,g,h;
char a1[20],name[20],city[15];
float
num3,num4,sum1,diff1,prod1,div1;
float p,t,si;
//Question2(total price of items)
printf("enter the number of pens,pencils and sharpeners respectively\n");
scanf("%d %d %d",&a,&b,&c);
e=a*10;
f=b*5;
g=c*2;
h=e+f+g;
printf("item\t price(Rs.)\t Total(Rs.)\n");
printf("--------------------------------------\n");
printf("pen\t\t 10\t %d\n",e);
printf("pencil\t\t 5\t %d\n",f);
printf("sharpener\t 2\t %d\n",g);
printf("--------------------------------------\n");
printf("Grand Total(Rs.) 17\t %d\n",h);
return;
}
