#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*.............priority queue.............*/
    /* priority queue sob theke boro element pq.top() return korbe */
    /* priority queue er operation hobe log2(n) 
     priority queue te repeated element ase
     multiset choto theke boro sort ar repeated element soho sort kore
     priority queue boro theke choto sort kore repeated element soho
     2tai e log2(n ) a kaj kore
     majher theke kono element delete kora jabe na always top theke element delete  hobe
     */
    /* priority_queue<int>pq;
    int n; cin>>n; */
    /* 
    7
    2
    4
    90
    23
    4
    3
    56 
    */
    /* for(int i=0; i<n; i++)
    {
        int a ; cin>>a;
        pq.push(a);
    }

    /* cout<<pq.top()<<endl;
    pq.pop();
    // sob theke boro element delete hobe
    cout<<pq.top()<<endl;
    //2nd highest element output debe */

    //print korar jonne
    /* cout<<pq.size()<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    } */ 
    // sorted decending order e sort hobe

    //sob theke choto element age rakhar jonne ekta comperator function 
    /*
    priority_queue<int, vector<int>,greater<int>>pq;
    int n; cin>>n; 
    7
    2
    4
    90
    23
    4
    3
    56 
    
    for(int i=0; i<n; i++)
    {
        int a ; cin>>a;
        pq.push(a);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    } 
    */

   // same example pair use kora hole

   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

   // normal pair er niyon onujai sorting hobe 1st value onujai sort hobe tarpor 2nd value onujai accending order 

   /* 
   7  
   1 2 
   2 3
   2 4
   4 4
   3 4
   */

  // code force er numbering system er moto sort korar jonne 1. problem solved 2. penalty
   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    int n ; cin>>n;
   for(int i=0; i<n; i++)
   {
    int a,b; cin>>a>>b;
    pq.push({a,b});
   }
   cout<<" "<<pq.size()<<endl;
   while (!pq.empty())
   {
    /* code */
    cout<<pq.top().first<<" "<<pq.top().second<<endl;
    pq.pop();
   }
   



}