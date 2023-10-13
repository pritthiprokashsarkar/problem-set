#include<bits/stdc++.h>
using namespace std;
void solve(string s, int n)
{
    int c=0,d=-1,e=0,f=-1;
    char b='>';
    char g='<';
    for(int i=0; i<n; i++)
    {
        if(s[i]==b)
        {
            c++;
            d=max(c,d);
        } 
        else 
        {
            c=0;
        }
        if(s[i]==g) 
        {   
            e++;        
            f=max(e,f);
        }
        else e=0;

    }
    cout<<max(d,f)+1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    string s;
    cin>>s;
    solve(s,n);
    }

}