#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int count=0,j;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d
",i);
        }
    }
    
}