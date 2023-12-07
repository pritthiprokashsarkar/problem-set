/* #include <iostream>
using namespace std;

void printDecreasing(int n){
    // write your code here
    if(n==0) return ;
    cout<<n<<endl;
    printDecreasing(n-1);
    
}

int main(){
    int n;
    cin >> n;
    printDecreasing(n);
}

 */
/* 
#include<bits/stdc++.h>
using namespace std;
void printincreasing(int n){
    if(n==0) return;
    printincreasing(n-1); // high level thinking
    cout<<n<<endl; // stack implementation of calling a function
}
int main(){
    int n; cin>>n;
    printincreasing(n);
} 
 recursive function call kora hoile function 2 vag a vag hoye jai
 1.upore jauyar time e recursive function er uporer line execute hoi
 2.recursive call niche asar time a recursive call er nicher line execute hoi

 Basics of Recursion | Print Decreasing Increasing Numbers using Recursion

*/

/* 
#include<bits/stdc++.h>
using namespace std;
void increasingdecreasing(int n){
    if(n==0) return;
    cout<<n<<endl;
    increasingdecreasing(n-1);
    cout<<n<<endl;
}
int main(){
    int n; 
    cin>>n;
    increasingdecreasing(n);
}

 */
/* 
factorial

#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    int gum=n*fact(n-1);
    return gum;
}
int main(){
    int n; cin>>n;
    int f=fact(n);
    cout<<f<<endl;
} 

Power (Linear) - Question | Recursion | Data Structures and Algorithms in JAVA



#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    if(n==0) return 1;
    int a=power(x,n-1);
    int b=x*a;
    return b;
}
int main()
{
    int x,n; cin>>x>>n;
    int pow=power(x,n);
    cout<<pow<<endl;
}


Calculate Power using Recursion (Logarithmic) | Recursion in JAVA

#include<bits/stdc++.h>
using namespace std;
int power(int x, int n){
    if(n==0) return 1;
    int a=power(x,n/2);
    // 2bar vag korse tai abr gun korte hobe
    int b=a*a;
    if(n%2==1){
        // odd hoile abr extra a gun korte hobe
        b=b*x;
    }
    return b;
}
int main(){
    int x,n; cin>>x>>n;
    cout<<power(x,n)<<endl;
}

printing zig-zag pattern || basic of tree

#include<bits/stdc++.h>
using namespace std;
void zigzag(int n){
    if(n==0) return ;
    cout<<"pre "<<n<<endl;
    zigzag(n-1);
    cout<<"in "<<n<<endl;
    zigzag(n-1);
    cout<<"post"<<n<<endl;
}
int main(){
    int n; cin>>n;
    zigzag(n);
}

displaying an array using recursion

#include<bits/stdc++.h>
using namespace std;
int n;
void disarr(int arr[], int i){
    if(i==n){
        cout<<endl;
        return;
    }
    cout<<arr[i]<<" ";
    disarr(arr, i+1);
}
int main(){
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    disarr(arr,0);
}


// displaying an array in reverse order

#include<bits/stdc++.h>
using namespace std;
int n;
void disarr(int arr[], int i){
    if(i==n){
        //cout<<endl;
        return;
    }
    disarr(arr, i+1);
    cout<<arr[i]<<" ";   
}
int main(){
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    disarr(arr,0);
    cout<<endl;
}

// max of an array using recursion
#include<bits/stdc++.h>
using namespace std;
int max_ele(vector<int>a,int i){
    if(i==a.size()-1)return a[i];
    int misa=max_ele(a, i+1);
    if(misa>a[i]) return misa;
    else return a[i];
    
}
int main(){
    int n,maxx=-1; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<max_ele(a,0)<<endl;
}

// tower of hanoi

#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n, int a, int b, int c){
    if(n==0) return;
    tower_of_hanoi(n-1, a, c, b); 
    // 1st tower theke 3rd tower a 2 ta disk soraite pare ei faith
    cout<<n<<"["<<a<<"->"<<b<<"]"<<endl; // amra 1 ta disk k 1st theke 2nd tower a sorabo
    tower_of_hanoi(n-1,c,b,a); 
    // 3rd tower theke 2nd tower a 2 ta disk soraite pare ei faith
}
int main(){
    int n; cin>>n;
    int a,b,c; cin>>a>>b>>c;
    tower_of_hanoi(n,a,b,c);
}
*/
