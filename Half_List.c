#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=n;
    for(x;x>n/2;x--)
    {
        printf("%d ",a[x-1]);
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d ",a[i]);
    }
    
}