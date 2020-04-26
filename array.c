#include<stdio.h>
int main()
{
    int a[100];
    int i,limit;
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter the values");
    for(i=0;i<=limit;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<=limit;i++)
        printf("entered values are\n");
    {

    printf("%d\t",a[i]);
    }
    return(0);
}
