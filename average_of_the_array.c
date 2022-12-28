#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    float avg=0;
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     sum=sum+a[i]; 
    }
     avg=(float)sum/n;
    printf("%0.2f",avg);
}