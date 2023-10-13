#include<bits/stdc++.h>
using namespace std;
int arr[100123];
// global array always 0 initialized
int main()
{
    /*.....................................*/
    /* 1.mapping -> counting the number frequency */

    /*1.frequency array*/

/*     vector<int>a={2,2,3,4,2};
    for(int &it : a) arr[it]++;
    for(int i=1; i<=*max_element(a.begin(),a.end()); i++)
    {
        cout<<i<<" "<<arr[i]<<endl;
    } */
    /* ....................................................*/

    /*2.basic maps*/

    /* map<string,string>id;
    id["pritthi"]="aaa";
    id["momo"]="bbb";
    id["sharif"]="vvv";
    cout<<id["sharif"]<<endl;
    // map er value directly access korar jonne
    int id1[123];
    id1[4]=2;
    cout<<id1[4]<<endl; */

    /*..................................................... */

    /* frequency array er problem hoilo 
    1. negative value store kora jabe na
    2. long long koono value store kroa jabe na */

    /* map<long long, int>mp;
    vector<long long> v= {1, 4954375475643756,4954375475643756,4954375475643756, 82374832489234, 82374832489234};
    for(auto it: v) mp[it]++;
    for(auto it : mp) cout<<it.first<<" " <<it.second<<endl;
    cout<<mp[4954375475643756]<<endl; 

    etar complexity log(2n)*/

    /*.............................................*/

    /* 1ta key deya 2ta value store kora somvob na */

/*     map<string,int>mp;
    int n; cin>>n; 
    for(int i=0; i<n; i++) 
    {
        string s;
        int a;
        cin>>s>>a;
        mp[s]=a;
    }
    for(auto &it: mp) cout<<it.first<<" "<<it.second<<endl; */
    /*................................................*/
    /* kono element visited kina ta hisab korar  */
    /* map<int,bool>mp;
    vector<int>v={2,2,1,1,3};
    for(auto it: v) mp[it]=1;
    for(auto it: mp) cout<<it.first<<" "<<it.second<<endl; */
    /*.............nesting......................*/
    /* vector<map<string,int>>v;
    map<string,int>p;
    p["pritthi"]=1;
    v.push_back(p);
    cout<<v[0]["pritthi"]<<endl; */

}