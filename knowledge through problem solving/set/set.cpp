#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* // set a sob kisu log2(n)
    set = vector unique plus sorting */
    /* 1. initialization of set
    set<int>s;
    s={1,2,2,5,6,3,3,3,3,4};
    cout<<s.size()<<endl;
    for(auto it:s)
    cout<<it<<" ";
    cout<<endl;

    s.clear();
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl; */

    /* 2.vector a jemon push_back kora hoito
    thik same vabe set a insert  */

    /* set<int>s;
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        s.insert(x); //log2(n)
    }
    set<int>:: iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl; */

  /*   3. set a jehetu protekta element unique 
    tai protekta element er count =1
    set a kono element ase kina check */

    /* set<int>s;
    int n,x; cin>>n>>x;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        s.insert(x); //log2(n)
    }
    set<int>:: iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.count(x)<<endl;
    cout<<s.count(100)<<endl; */ // 100 er count holo 0 bar

    // kno element na paile tar count=0 hobe
    //vector ba array te count(all(v)) cilo
    
    /* 4. pointer deya print */

    /* set<int>s;
    s={1,2,2,5,6,3,3,3,3,4};
    cout<<*(s.begin()+1)<<endl;

    // 5.hobe na karon consecutive ds na */
    /* kintu ++/-- increment or decrement operator
    thik e kaj kore */

    /* set<int>s;
    s={1,2,2,5,6,3,3,3,3,4};
    cout<<*(++s.begin())<<endl;
    cout<<*(s.rbegin())<<endl;
    cout<<*(--s.end())<<endl; */

    // 6.set prote ta element unique tai
    // chailei amra element gula delete 
    // korte pari


    /* set<int>s;
    s={1,2,2,5,6,3,3,3,3,4};
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl; */

   
    /* set<int>s;
    s={1,2,2,5,6,3,3,3,3,4}; */
     //7. erase function a direct value deya
    /* s.erase(5);
    s.erase(6); */
    //8. erase function a direct pointer
    /* set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    } 
    cout<<endl;
    s.erase(s.begin());
    s.erase(--s.end());
    // s.erase(s.rbegin()) eta hoina
    cout<<s.size()<<endl;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    } */

    // 9.set of pair and set of string

    /* set<string>s;
    int n; cin>>n;
    /*
    8
    anam 
    babor 
    chairle 
    delta 
    echo 
    priithi
    echo 
    whisky 
    */
    /* for(int i=0; i<n; i++)
    {
        string t; cin>>t;
        s.insert(t);
    }
    cout<<s.size()<<endl;
    set<string>:: iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl; */ 

    /* 1.dictionary sorting hobe
    2.unique element gula store hobe */

    //10. set of pairs of integers
    /* set<pair<int,int>>s;

    /* 1. set 1st a protekta (1st)+(2nd) value k unique korbe
    2. tarpor sort korbe */
     /* int n; cin>>n; */
    
   /*11
    10 20
    6 10
    6 9
    6 8
    7 10
    7 8
    6 8
    1 3
    10 20
    2 7
    8 6  */
    
    
     /* for(int i=0; i<n; i++)
    {
        int a,b; cin>>a>>b;
        s.insert({a,b});
    }
    for(auto it: s)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }  */
    
    // decreasing order a set treverse kora

    /* set<int>s;
    int n; cin>>n;
    /* 
    6
    1
    1
    2
    2
    4
    5 
    */
    /* for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        s.insert(a);
    }
    auto it=s.end();
    for(it=--s.end(); it!=s.begin(); it--)
    {
        cout<<*it<<endl;
    }
    cout<<*it<<endl; */ 

    //.................. direct greater function use kore
    /* set<int, greater<int>>s;
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        s.insert(a);
    }
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    } */

    // dictionary sorting ulta kore
    /* set<string,greater<string>>s;
    int n; cin>>n;
        /*
    8................................
    anam 
    bbb
    bbbb
    delta 
    echo 
    priithi
    echo 
    whisky 
    */
    /* for(int i=0; i<n; i++)
    {
        string t; cin>>t;
        s.insert(t);
    }
    cout<<s.size()<<endl;
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }
    ......dictionary sorting > size..........  */ 

    /*........... pair with greater fucntion.............*/
    
    /* 
    8
    4 10
    4 10
    4 11
    4 8
    3 1
    3 2
    3 3
    2 1 
    */
   /* set<pair<int,int>, greater<pair<int,int>>>s;
   int n; cin>>n;
   for(int i=0; i<n; i++)
   {
        int a,b; cin>>a>>b;
        s.insert({a,b});
   }
   for(auto it : s)
   {
    cout<<it.first<<" "<<it.second<<endl;
   } */

   /* unordered set same just sort krobe na */
   /* unique hobe but sort hobe na
   unorderset set er o(1) a kaj kore */


}