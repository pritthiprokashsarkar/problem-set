#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        long long w,h; cin>>w>>h;
        long long maxx=0;
        for(int i=0; i<2; i++)
        {
        int a; cin>>a;
        vector<int>x(a);
        for(int i=0; i<a; i++) cin>>x[i];
        long long diff = ((*max_element(x.begin(),x.end()))-(*min_element(x.begin(),x.end())))*h;
        maxx = max(diff,maxx);
        }
        for(int i=0; i<2; i++)
        {
        int a; cin>>a;
        vector<int>x(a); 
        for(int i=0; i<a; i++) cin>>x[i];
        long long diff =  ((*max_element(x.begin(),x.end()))-(*min_element(x.begin(),x.end())))*w;
        maxx = max(diff,maxx);
        }
        cout<<maxx<<endl;
    }

}