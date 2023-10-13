#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*
    /* 1. pair holo built in structure pair er*/
    /* 2. pair declaration*/
    /*     pair<int,int> p;
    p.first=1; 
    p.second=2;
    p.first++;
    cout<<p.first<<' '<<p.second<<endl; */

    /*.................................*/

    /*3. different types of vectors*/
    /* pair<string, vector<int>>p;
    p.first = "pritthi";
    p.second = {1,2,3};
    cout<<p.first<<' '<<p.second[2]<<endl;
    cout<<p.first<<endl;
    for(auto it : p.second) cout<<it<<' ';
    cout<<endl; */

    /*..................................*/

    /* 4.how to make new pair using make_pair function*/
/*    pair<string ,vector<int>>p;
    p.first="pruuthi";
    p.second={1,2,3};
    cout<<p.first<<" "<<endl;
    for(int it : p.second) cout<<it<<" ";
    cout<<endl; */

    /*........ ....................*/

    /* 5.make_pair function directly array input neta parbe na */ 
    /* vector<int>arr = {2, 3, 4};
    pair<string, vector<int>> p = make_pair("supti", arr);
    cout<<p.first<<endl;
    for(auto it: p.second) cout<<it<<" ";
    cout<<endl; */

    /*............................................*/

/*    6. { } braces use kore pair banano 
    ete easily vector input deya jabe */
/*     pair<string, vector<int>>p={"pritthi", {1,2,3}};
    cout<<p.first<<endl;
    cout<<p.second[2]<<endl;
    for(int it : p.second) cout<<it<<" ";
    cout<<endl; */

    /*.......................................*/

   /*  pair comparision */
/*    1st value prothom a compare hobe tarpor 2nd value compare hobe
 */    /* pair<int,int>p1,p2,p;
    p1={2,3};
    p2={2,1};
    //cout<<(p1>p2)<<endl;
    p=min(p1,p2);
    cout<<p.first<<" "<<p.second<<endl; */

    /*.........................................*/

    /* vector of pair er sorting */
    /* vector<pair<int,int>>v= {{2,3},{4,5},{6,1},{1,9}}; 
    v.push_back(make_pair(10,7));
    v.push_back(make_pair(-19,5));
    v.push_back({6,0});
    // () 1st bracket dela vul hoye jabe
    sort(v.begin(), v.end(),lambda function lagbe);
    for(auto it: v) cout<<it.first<<" "<<it.second<<endl;
    cout<<endl; */

    /*...............................................*/

    /*pair of array*/
    /* pair<int,int>v[]= {{2,3},{4,5},{6,1},{1,9}}; 
    // () 1st bracket dela vul hoye jabe
    sort(v,v+4);
    for(auto it: v) cout<<it.first<<" "<<it.second<<endl;
    cout<<endl; */

    /*..........................................*/

    /* unique function in vector of pairs==map */
    /* vector<pair<string,int>>v;
    v={{"pritthi",19},{"pritthi",21},{"pritthi",21},{"moom",32},{"rritthi",21},{"ioi",39}};
    sort(v.begin(),v.end());
    //for(auto it: v) cout<<it.first<<" "<<it.second<<endl;
    int sz= unique(v.begin(),v.end())-v.begin();
    for(int i=0; i<sz; i++) cout<<v[i].first<<" "<<v[i].second<<endl; */

    /*...................................................*/
    





    





}