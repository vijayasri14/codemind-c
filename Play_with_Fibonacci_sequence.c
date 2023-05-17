#include<stdio.h>
int main()
{
    int n,a,b,i,sum;
    scanf("%d",&n);
    a=0;
        b=1;
        printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
            sum=a+b;
            printf("%d ",sum);
            a=b;
            b=sum;
    }
}