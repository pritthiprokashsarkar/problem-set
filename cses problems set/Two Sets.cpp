#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> a,v;
    if(n%4==0)
    {
        int e = n;
        int s = e-3;
        while(true)
        {
            v.push_back(e);
            v.push_back(s);
            for(int i=s+1; i<e; i++) a.push_back(i);
            if(s==1 ) break;
            e = s - 1;
            s = e - 3;

        }
    }
    if(n%4 == 3)
    {
        int e = n;
        int s = e-3;
        while(true)
        {
            v.push_back(e);
            v.push_back(s);
            for(int i=s+1; i<e; i++) a.push_back(i);
            e = s - 1;
            s = e - 3;
            if(e==3)
            {
                v.push_back(1);
                v.push_back(2);
                a.push_back(3);
                break;
            }
        }
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    cout<<"YES"<<endl;

    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    cout<<a.size()<<endl;
    for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n; cin>>n;
    if(n==3){
       vector<int> a,v;

       v.push_back(1);
       v.push_back(2);
       a.push_back(3);

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    cout<<"YES"<<endl;

    cout<<a.size()<<endl;
    for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
    cout<<endl;

    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    return 0;

    }
    if(n%4==1 or n%4==2) {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        solve(n);
    }

}
