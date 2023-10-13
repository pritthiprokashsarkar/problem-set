#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
                int n;
    scanf("%d ",&n);
    int a=n;
    char b[n];
    gets(b);


    for(int i=0;i<(n/2);i++)
    {
        if(b[i]=='1'&&b[n-1-i]=='1' || b[i]=='0' && b[n-1-i]=='0')
            break;
        else if(b[i]=='1' && b[n-1-i]=='0' || b[i]=='0' && b[n-1-i]=='1')
            a-=2;
    }
    printf("%d\n",a);
    }



}
