#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%d ",i%2);
        }
        printf("
");
    }
}