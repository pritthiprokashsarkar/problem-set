// binary search 
// binary search sudhu monotonic function e kaj kore
// predicate function a binary search use kora jai
// FFFFFTTTTTT 1st a false return korse tar por true return korse eita monotonic predicate function
// or tttttttttttfffffffffffffff etao monotonic function
// kono number a 2 deya (log 2 base n ) bar divide kora jai


/*
// sorted array er binary search 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    int find;cin>>find;
    int lo=0, hi=n-1;
    int mid;
    while(hi-lo>1){
        int mid = (hi+lo)/2;
        if(a[mid]<find){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(a[lo]==find){
        cout<<lo<<endl;
    }
    else if(a[hi]==find){
        cout<<hi<<endl;
    }
    else {
        cout<<"no found"<<endl;
    }
}
time complexity =
*/
/*
// lower bound and upper bound using binary search
#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&a, int element){
    int hi=a.size()-1;
    int lo=0;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(a[mid]<element){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    // age lower limit check korte hobe
    if(a[lo]>=element){
        return lo;
    }
    else if(a[hi]>=element){
        return hi;
    }
    else return -1;
    // binary search always index return kore
}
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int element; cin>>element;
    cout<<lower_bound(a,element)<<" "<<a[lower_bound(a,element)]<<endl;

}

*/
/*
#include<bits/stdc++.h>
using namespace std;
int upper_bound(vector<int>&a, int element){
    int hi=a.size()-1;
    int lo=0;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(a[mid]<=element){ // equal element keu eliminate korte hobe
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    // age lower limit check korte hobe
    if(a[lo]>element){
        return lo;
    }
    else if(a[hi]>element){
        return hi;
    }
    else return -1;
    // binary search always index return kore
}
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int element; cin>>element;
    int id=upper_bound(a,element);
    cout<<id<<" "<<(id !=-1?a[id]:-1)<<endl;
}

*/ 
// nth root using binary search
/* 
n er square root 1-n er moddhe thakbe

#include<bits/stdc++.h>
using namespace std;

double eps=1e-6; // 5 decimal porjonto accuracy er jonne
double multiply(double mid, int n){
    double ans=1;
    for(int i=0;i<=n-1;i++){
        ans*=mid;
    }
    return ans;
}
int main(){
    double x,n; cin>>x>>n;
    double lo=1, hi=n, mid;
    while(hi-lo>eps){
        mid=(hi+lo)/2;
        if(multiply(mid,n)<x){ //mid*mid*mid..... nth time gun korte hobbe
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    cout<<setprecision(10)<<lo<<" "<<hi<<endl;
    cout<<pow(x,1.0/n)<<endl;
}
*/
// sqrt er time complexity log(N*(10^d))
// pth root er time time complesity p*log(N*(10^d))


//Advanced Binary Search with Predicate Function 

/*
    monotonic predicate function khuje ber korte hobe tar upor binary search apply korte hobe
    predicate function je function true or false return kore tar nam predicate function
    monotonic predicate function a binary search
    ttttttfffffffffffff
    ffffffffffttttttttttt
    ttttttttttttttttt
    fffffffffffffffff 
  sesh true find korte hobe jeno m amount wood peye jai

*/
/* 
#include<bits/stdc++.h>
using namespace std;
int n,m;
const int x=1e6+123;
vector<int>a(x);
bool is_sufficient(long long aa){
    long long ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>aa){
            ans+=(a[i]-aa);
        }
    }
    //if(ans>=m) return true;
    //else return false;
    return ans>=m;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    long long low=0,high=1e9+123;
    while(high-low>1){
        //ttttttttffffffffffff
        long long mid=(low+high)/2;
        if(is_sufficient(mid)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    //last occurance of t hisab korar jonne age high element k check korte hobe
    if(is_sufficient(high)) cout<<high<<endl;
    else  cout<<low<<endl;
    // else if print -1 case konodin o asbe na minimum ekta height sob somoy pabo
    
} */


//Advanced Binary Search with Predicate Function | SPOJ AGGRCOW |
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+123;
long long n,c;
vector<long long>v(N);
bool func(long long mindis)
{
    int lastpos=-1;
    int cow_cnt=c;
    for(int i=0;i<n;i++){
        if(v[i]-lastpos>=mindis || lastpos==-1){
            cow_cnt--;
            lastpos=v[i];
        }
        if(cow_cnt==0) break;
    }
    if(cow_cnt==0) return true;
    else return false;
}
int main(){
    int t; cin>>t; 
    while (t--)
    {
        cin>>n>>c;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.begin()+n); // sort korar time a khub sabdhan
        long long lo=0,mid;
        long long hi=1e9;
        while(hi-lo>1){
            mid=(lo+hi)/2;
            //tttttttffffffffff
            if(func(mid)){
                lo=mid;
            }
            else{
                hi=mid-1;
            }
        }
        if(func(hi)) cout<<hi<<endl;
        else cout<<lo<<endl;


    }
    
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+123;
int n,c;
vector<int>a(N);
bool predicate(long long dis){
    int pos=-1;
    int cowcnt=c;
    for(int i=0;i<n;i++){
        if(a[i]-pos>=dis or pos==-1){
            cowcnt--;
            pos=a[i];
        }
        if(cowcnt==0) break;
    }
    return cowcnt==0;
}
int main(){
    int t; cin>>t;
    while(t--){
    cin>>n>>c;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.begin()+n);
    ///ttttttttttfffffffffffffff
    long long lo=0;
    long long hi=1e9+123;
    while(hi-lo>1){
        long long mid=(hi+lo)/2;
        if(predicate(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(predicate(hi)) cout<<hi<<endl;
    else cout<<lo<<endl;
    }
}

*/


// binary search take u forward
/*
int search(vector<int> &n, int t) {
    int lo=0;
    int hi=n.size()-1;
    while(hi-lo>=0){
        int mid=(lo+hi)/2;
        if(n[mid]==t){
            return mid;
        }
        else if(t>n[mid]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}
*/

// recursive implementation of binary search

//pore bujhbo

/* time complexity 
log base 2 (n)

over flow case

1. long long neta hobe
2. or low +(high-low)/2

BS-2. Implement Lower Bound and Upper Bound | Search Insert Position | Floor and Ceil

lower bound
smallest index such that arr[ind]>=n
1. oi element thakle oi element return kore
2. absent thakle oi element theke boro value return kore
arr[] = {3,5,8,15,19}
n=8         n=9         n==16           n==20
lb=2        lb=3        lb=4            lb=5 array thekeo boro element dela v.end() return kore
arr[]={3,5,8,15,19,19,19,19} thakle

n=19 hole lb=4 hobe

binary search a ans=arr.size() variable rakhte hobe


*/

// Implement Lower Bound
// coding ninja
//https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1

/*
    int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low=0;
	int high=n-1;
	int ans=n;
	while(high-low>1){
		int mid=(high+low)/2;
			if(arr[mid]>=x){
				high=mid;
			}
			else{
				low=mid+1;
			}
	}
	// age lower limit check korte hobe
    if(arr[low]>=x){
        return low;
    }
    else if(arr[high]>=x){
        return high;
    }
    else return n;
    // binary search always index return kore
}

or

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low=0;
	int high=n-1;
	int ans=n;
	while(high-low>=0){
		int mid=(high+low)/2;
		if(high-low>=0){
			if(arr[mid]>=x){
				ans=mid;
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
	}
	return ans;
}

stl for lower bound 

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int lb = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
	return lb;
}

2 theke 6 index er moddhe jodi lower bound apply kora lage taile
arr.begin()+2 , arr.begin()+7

time complexity O(log(base2)N)


upper bound
///////////////////////////////////
smallest index such that arr[ind]>x;

lower bound a less than hoile search space er baire 
upper bound a less than or equal hoile search space er baire 

implementation of upper bound
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int lo=0;
	int hi=n-1;
	int ans=n;
	while(hi-lo>=0){\
		// 122334567
		int mid=(hi+lo)/2;
		if(arr[mid]<=x){ search space komano
			lo=mid+1;
		}
		else{
			ans=mid;
			hi=mid-1;
		}
	}
	return ans;	
}

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	return upper_bound(arr.begin(),arr.end(),x)-arr.begin();
}

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int lo=0;
	int hi=n-1;
	while(hi-lo>1){
		// 122334567
		int mid=(hi+lo)/2;
		if(arr[mid]<=x){ search space komano
			lo=mid+1;
		}
		else{
			hi=mid;
		}
	}
	if(arr[lo]>x) return lo;
	else if(arr[hi]>x) return hi;
	else return n;
	
}
 time complexity log2(N)

 

*/



/*

https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	// ceil arr[n]>=x
	pair<int,int>b;
	int lo=0;
	int hi=a.size()-1;
	int ans=-1;
	while(hi-lo>=0){
		int mid=(lo+hi)/2;
		if(a[mid]<x){
			lo=mid+1;
		}
		else{

            // element return korte hobe

			ans=a[mid];
			hi=mid-1;
		}
	}
	b.second=ans;
	//floor arr[n]<=x or -1 
	lo=0;
	hi=a.size()-1;
	ans=-1;
	while(hi-lo>=0){
		int mid=(hi+lo)/2;
		if(a[mid]>x){
			hi=mid-1;
		}
		else{

            // element return korte hobe

			ans=a[mid];
			lo=mid+1;
		}
	}
	b.first=ans;
	return b;
	
}


*/


//BS-3. First and Last Occurrences in Array | Count occurrences in Array

// first and last occuring index of a given number
// brute force of 1st and last occurance
/* 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int element; cin>>element;
    int first=-1,last=-1;
    vector<int>a(n);
    for(int i=0;i<=n-1;i++){
        if(a[i]==element){
            if(first==-1) first=i;
            last=i;
        }
    }
}


1st and last occuring of x
{2,4,6,8,8,8,10,12,13}

lower bound= arr[i]>=x >>>> ei lower bound deya 1st occurance pabo
upper bound= arr[i]>x >>>> ei upper bound deya last occurance pabo

corner case 

x=11 hoile

11 er lower bound 12 hobe
tai arr[lb]==x compare korte hobe

14 er lower bound deya n hypothetical index return korbe

tai lb(14)!=n o check korte hobe

if(lb(i)==n || arr[lb]!=x) hoile return -1 -1 number nai

ans {lb,up-1}

 */

/*
1st and last occurance of an element

https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0

#include<bits/stdc++.h>
pair<int,int>ams={-1,-1};
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int lo=0;
	int hi=n-1;
	int ans=n;
	while(hi-lo>=0){\
		// 122334567
		int mid=(hi+lo)/2;
		if(arr[mid]<=x){ //search space komano
			lo=mid+1;
		}
		else{
			ans=mid;
			hi=mid-1;
		}
	}
	return ans;	
}

int lowerBound(vector<int> &arr, int x, int n) {
	// Write your code here
	int low=0;
	int high=n-1;
	int ans=n;
	while(high-low>=0){
		int mid=(high+low)/2;
		if(high-low>=0){
			if(arr[mid]>=x){
				ans=mid;
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
	}
	return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb=lowerBound(arr,k,n);
    int ub=upperBound(arr,k,n);
    if(arr[lb]!=k || lb==n) return ams;
    else{
        ams.first=lb;
        ams.second=ub-1;
        return ams;
    }
}

striver solution

#include<bits/stdc++.h>
pair<int,int>ams={-1,-1};
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int lo=0;
	int hi=n-1;
	int ans=n;
	while(hi-lo>=0){\
		// 122334567
		int mid=(hi+lo)/2;
		if(arr[mid]<=x){ //search space komano
			lo=mid+1;
		}
		else{
			ans=mid;
			hi=mid-1;
		}
	}
	return ans;	
}

int lowerBound(vector<int> &arr, int x, int n) {
	// Write your code here
	int low=0;
	int high=n-1;
	int ans=n;
	while(high-low>=0){
		int mid=(high+low)/2;
		if(high-low>=0){
			if(arr[mid]>=x){
				ans=mid;
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
	}
	return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb=lowerBound(arr,k,n);
	if(arr[lb]!=k || lb==n) return {-1,-1};
	else{
		return {lb, upperBound(arr,k,n)-1};
	}
}

plain bs

#include<bits/stdc++.h>
int first(vector<int>&arr, int n, int x){
    int lo=0;
    int hi=n-1;
    int f=-1;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(arr[mid]==x){
            f=mid;
            hi=mid-1;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return f;
}
int second(vector<int>&arr, int n, int x){
    int lo=0;
    int hi=n-1;
    int s=-1;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(arr[mid]==x){
            s=mid;
            lo=mid+1;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return s;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int ff=first(arr,n,k);
    if(ff==-1) return {-1,-1};
    int ss=second(arr,n,k);
    return {ff,ss};

}


https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries

Number of occurrence


#include<bits/stdc++.h>
int upper_bound(vector<int>& arr, int n, int x){
	int lo=0;
	int hi=n-1;
	int ans=n;
	while(hi-lo>=0){
		int mid=(lo+hi)/2;
		if(arr[mid]<=x){
			lo=mid+1;
		}
		else{
			ans=mid;
			hi=mid-1;
		}
	}
	return ans;
}
int lower_bound(vector<int>& arr, int n, int x){
	int lo=0;
	int hi=n-1;
	int ans=n;
	while(hi-lo>=0){
		int mid=(lo+hi)/2;
		if(arr[mid]<x){
			lo=mid+1;
		}
		else{
			ans=mid;
			hi=mid-1;
		}
	}
	return ans;
}
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int lb=lower_bound(arr,n,x);
	int ub=upper_bound(arr,n,x);
	if(lb==ub-1) return (ub-1)-lb;
	else{
		return ub-lb;
	}
}


*/







