#include<stdio.h>
int main()
{
    int i,j,n,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=x;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
        x=i+1;
    }
}