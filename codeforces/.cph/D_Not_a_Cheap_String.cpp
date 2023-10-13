#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int>a,pair<char,int>b){
    return a.first>b.first;
}
int main()
{
    int tx;cin>>tx;
    while(tx--)
    {
    string s; cin>>s;
    int p; cin>>p;
    int cost=0;
    //sort(w.rbegin(),w.rend());
    vector<pair<char,int>>v;
    for(int i=0;i<s.size();i++){
        v.push_back({s[i],i});
        cost+=(s[i]-96);
    }
    sort(v.begin(),v.end(),cmp);
    vector<int>index(s.size()+1,0);
    for(auto it: v){
        if(cost<=p) break;
            index[it.second]=-1;
            cost-=(it.first-96);
        }
    }
    for(int i=0;i<s.size();i++){
        if(index[i]!=-1){
            cout<<s[i];
        }
    }cout<<endl;
}
/* 
#include<bits/stdc++.h>
using namespace std;
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
bool cond(pair<char,int>a,pair<char,int>b){
    return (a.first>b.first);
}
 
int main(){
    int t;                  cin>>t;
    while(t--){
        string s;           cin>>s;
        int n=s.size();
        int p;              cin>>p;
 
        vector<pair<char,int>> v;
        int cost=0;
        in_range(i,0,n-1){
            v.pb({s[i],i});
            cost+=(s[i]-96);
        }
 
        vi Indxs(n+1,0);
 
        sort(all(v),cond);
 
        for(auto i:v){
            if(cost<=p)break;
            cost-=(i.first-96);
            Indxs[i.second]=-1;
        }
 
        in_range(i,0,n-1){
            if(Indxs[i]!=-1){
                cout<<s[i];
            }
        }cout<<endl;
    }
    checkmate
} */