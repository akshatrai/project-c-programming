#include<stdio.h>
int main()
{
    int a;
    printf("input your temperature\n");
    scanf("%d",&a);
    if (a<0)
    {
        printf("freezing temperature");
    }
else if ((a>0)&&(a<10))
{
    printf("very cold temperature");
}
else if ((a>10)&&(a<20))
{
    printf("cold weather");
}
else if ((a>20)&&(a<30))
{
    printf("normal temperature");
}
else if ((a>30)&&(a<40))
{
    printf("its hot");
}
else if (a>=40)
{
    printf("its very hot");
}
return 0;
}
