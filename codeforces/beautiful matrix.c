#include<stdio.h>
int main()
{
    int i,j,x=0,m,n;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&x);
            if(x==1)
            {
                m=i;
                n=j;
            }

        }

    }
    printf("%d",abs(3-m)+abs(3-n));
}
