/*  #include<bits/stdc++.h>
 using namespace std;
 int calPoints(vector<string>&xxx) {
        stack<int>a,b;
        int x,sum1=0;
        for(auto it: xxx)
        {
            if(it>="0" and it<="9")
            {
                x = stoi(it);
                a.push(x);
            }
            else if( it=="C")
            {
                a.pop();
            }
            else if(it =="D")
            {
                int x;
                x=a.top();
                a.pop();
                a.push(a.top()*x);
            }
            else if(it=="+")
            {
                int sum=0;
                b=a;
                while(!b.empty())
                {
                    sum+=b.top();
                    b.pop();
                }
                a.push(sum);
            }
        }
        while(!a.empty())
        {
            sum1+=a.top();
            a.pop();
        } 
        return sum1; 
    } */
/*__________queue____________*/
/* 1. queue holo stack er ulta 
2. fifo-->queue
3. lifo --> queue */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* 1. decleration */
    
   /*  queue<int>q; */
    /* 
    6
    1
    2
    3
    4
    5
    6 
    */
   /* int n; cin>>n; 
   for (int i = 0; i < n; i++)
   {
        int a ; cin>>a;
        q.push(a);
   } */

   /* for(auto it : q)
   {
    cout<<it<<endl;
   }
    emon kore output kora jabe na */
    /*size dekhar jonne*/
    /* cout<<"size dekhar jonne"<<q.size()<<endl; */
    /*output deyar jonne*/

    /* while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    } */
    /*
    queue te sobar front na ba sobar age k asse
    stack a selo stack.top()
    stack ba queue te majher element k access kora jai na
     */

   /* cout<<q.front()<<endl;
   q.pop(); */
   // samner element erase korar jonne




   /*...................dequeue....................*/
    /* 1. front a push abar back eu push kora jai o(1) a;
    2. pop front pop back 2tai kora jabe 
    3. dq.front(), dq.back() 2tai kaj kore
    
     */
    deque<int>dq;
    int n; cin>>n;
    /* 
    6
    1
    2
    3
    4
    5
    6 
    */
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        dq.push_front(a);
        dq.push_back(a);
    }
    cout<<"first element "<<dq.front()<<endl;
    cout<<"last element "<<dq.back()<<endl;
    for(auto it : dq) cout<<it<<" ";
    cout<<endl;
    dq.pop_front();
    dq.pop_back();
    for(auto it : dq) cout<<it<<" ";
    cout<<endl;
    /*extra functions*/
    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;
   

}



void push_back_pb(deque<int> &dq, int x)
{
    dq.push_back(x);
}

void pop_back_ppb(deque<int> &dq)
{
    if (!dq.empty())
    {
        dq.pop_back();
    }
}

int front_dq(deque<int> &dq)
{
    if (!dq.empty())
    {
        return dq.front();
    }
    return -1;
}

void push_front_pf(deque<int> &dq, int x)
{
    dq.push_front(x);
}



#Function to push element x to the front of the deque.
def push_front_pf(dq,x):
    #code here
    dq.appendleft(x)

#Function to push element x to the back of the deque.
def push_back_pb(dq,x):
    #code here
    dq.append(x)
    
#Function to return element from front of the deque.
def front_dq(dq):
    #code here
    return dq[0] if dq else -1
    
#Function to pop element from back of the deque.
def pop_back_ppb(dq):
    #code here
    if dq:
        dq.pop()

