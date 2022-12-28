#include<stdio.h>
int main()
{
    int n,i,m,flag=0;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}