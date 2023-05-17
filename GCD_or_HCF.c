#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        for(i=y;i>0;i--)
        {
            if(x%i==0 && y%i==0)
            {
                printf("%d",i);
                break;
            }
        }
    }
    
}