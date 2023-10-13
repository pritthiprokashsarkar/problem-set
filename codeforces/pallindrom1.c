#include<stdio.h>
int main()
{


     int t;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        scanf("%d ",&n);
         char a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }

    int s=0,s1=0,ans=0,ans1=0,v=0;
    int e=n-1,e1=e;
    while(s<=e)
    {

        if(a[s]==a[e])
        {
            s++;
            e--;
        }
        else
        {
            ans=1;
            break;

        }
    }
    if(ans==0)
    {
      v=1;
    }

    else
    {
        v=2;
        while(s1<e1)
        {
                if(a[s1]=='1' && a[e1]=='0' || a[s1]=='0' && a[e1]=='1')
        {
            s1++;
            e1--;
        }

        else
        {

            ans1=2;
            break;



        }
        }
    }

      if(ans1==2 && v==2)
        printf("NO\n");
    else if(ans1==0 && v==2)
        printf("YES\n");
    else if(v==1)
        printf("YES\n");

    }


}





