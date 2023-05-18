#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&c>b)
    {
        p=a+c;
    }
    else if(a>c&&b>c)
    {
        p=a+b;
    }
    else
    {
        p=b+c;
    }
    printf("%d",p);
}