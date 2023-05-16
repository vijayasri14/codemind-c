#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,j,c=0,s=0,l=0;
    for(i=0;str[i]!=0;i++)
    {
       l+=1; 
    }
    for(i=0;i<l;i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(i!=j)
            {
                if(str[i]==str[j])
                {
                    c+=1;
                }
            }
        }
        if(c==0)
        {
            printf("%d",i);
            s=1;
            break;
        }
    }
    if(s==0)
    {
        printf("-1");
    }
}