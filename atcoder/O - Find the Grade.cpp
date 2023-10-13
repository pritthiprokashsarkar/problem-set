#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==-1 and b==-1 and c==-1)
        {
            break;
        }
       else if(a==-1 or b==-1 )
        {
            cout<<"F"<<endl;

        }

        else if((a+b)>=80) cout<<"A"<<endl;
        else if((a+b)>=65 and (a+b)<80) cout<<"B"<<endl;
        else if((a+b)>=50 and (a+b)<65) cout<<"C"<<endl;
        else if((a+b)>=30 and (a+b)<50)
        {
        if(c>=50) cout<<"C"<<endl;
            else cout<<"D"<<endl;
        }
        else if((a+b)<30 and (a+b)>=0)
        {
            if(c>=50) cout<<"C"<<endl;
            else cout<<"F"<<endl;
        }
    }
}
