#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n;
    int a[5][5];
    for(i=0; i<5;i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<5;i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                m=i+1;
                n=j+1;
                break;
            }
        }
    }
    int x=abs(3-m);
    int y=abs(3-n);
    printf("%d",x+y);
}
