#include<stdio.h>
int main()
{
    int t,x=0,y=0,i;

    scanf("%d", &t);
    while(t--)
    {
        if(t<0)
        break;
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a[n]);

        for(i=0; i<n; i++)
        {
            if(a[i]=='U')
                y++;
           else if(a[i]=='D')
                y--;
            else if(a[i]=='L')
                x--;
            else if(a[i]=='R')
                x++;
        }
        if(x==1 && y==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

