#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        long long int a,b,j,x=0;
        scanf("%lld%lld",&a,&b);
        for(j=0;j<=b;j++)
        {
            if ((j*j)%b==a)
            {
                printf("%lld
",j);
                x=1;
                break;
            }
        }
        if(x==0)
        {
            printf("-1
");
        }
    }
}