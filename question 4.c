#include<stdio.h>
int main()
{
int rows,i,j,number=1, space, k=0, count = 0, count1 = 0;
//part a
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            ++count;
        }
        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                printf("%d ", i+k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }
    //part 2
        int  coef = 1;
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
            printf("%4d", coef);
        }
        printf("\n");
    }
//part c
printf("enter number of rows:\n");
scanf("%d", &rows);
for(i=1; i<=rows; i++)
{
for(j=1; j<=i; ++j)
{
printf(" %d", number);
++number;
}
printf("\n");
}
return 0;
}
