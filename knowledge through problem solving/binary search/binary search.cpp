
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
        if(  <=element){ // equal element keu eliminate korte hobe
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

// search element in a rotated array for unique element

// left half not sorted 
// right half sorted
// identify the sorted half is it the left half or is it the right half
/*
7 8 9 1 2 3 4 5 6 
lo=0 hi=n-1 neta hobe mid hisab kore check korbo mid er left search
space sorted naki right search space sorted
tarpor je part sorted thakbe sei part a binary search apply korbo
binary search deya target element khujbo jodi sorted space a element na pai
sorted part k eliminate korbo
ei vabe bar mid ber kore hisab korbo
left half ar right half a mid soho hisab hobe



int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int lo=0;
    int hi=n-1;
    while(hi-lo>=0){
        int mid=(lo+hi)/2;
        if(arr[mid]==k) return mid;
        if(arr[lo]<=arr[mid]){ // left part ki sorted???
            if(arr[lo]<=k && arr[mid]>=k){ // sorted er moddhe ki target element ase??
                hi=mid-1; // thakle hi er range komau
            }
            else {
                lo=mid+1; //naile sorted half a nai
            }    
        }
        else{   // right half sorted
            if(arr[mid]<=k && k<=arr[hi]){ // sorted half a ki k element ase??
            // ei condition vul korse
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }

        }
    }
    return -1;
}


main concept holo 1st a check right part sorted naki left part sorted
left part sorted hoile left side a binary search 
left sorted size e ki element ase na thakle right side a ase
right part sorted hoile right side a binary search apply
right sorted side a ki element ase na thakle left side a ase


same question with duplicate elements

main problem hoilo corner case arr[low]==arr[mid]==arr[high]
suppose     3 3 3 3 1 2 3 3 3 3 3 target=1

arr[lo]==arr[mid]==arr[hi] taile kon part bad debo eita identify kora jasse na ei jonne amra shrink korbo



bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    // Write your code here.
    int lo=0;
    int hi=arr.size()-1;
    while(hi-lo>=0){
        int mid=(lo+hi)/2;
        if(arr[mid]==k) return true;
        if(arr[lo]==arr[mid] and arr[mid]==arr[hi]){
            lo=lo+1;
            hi=hi-1;
            continue;
        }
        if(arr[lo]<=arr[mid]){
            if(arr[lo]<=k && k<=arr[mid]){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[hi]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
    }
    return false;
}


minimum in the rotated array

sorted half theke bar bar mininum ans nebo tarpor sorted half range theke bad deya debo

int findMin(vector<int>& a)
{
	// Write your code here.
	int lo=0;
	int hi=a.size()-1;
	int minn=INT_MAX;
	while(hi-lo>=0){
		int mid=(lo+hi)/2;
		if(a[lo]<=a[mid]){ // left half sorted
			minn=min(minn,a[lo]);
			lo=mid+1;
		}
		else{
			minn=min(minn,a[mid]);
			hi=mid-1;
		}
	}
	return minn;
}


more optimized code

1st condition jodi pai a[lo]<=a[hi] taile already ekta part sorted hobe extra kore abr mid neya 
binary search korar dorkar nai

int findMin(vector<int>& a)
{
	// Write your code here.
	int lo=0;
	int hi=a.size()-1;
	int minn=INT_MAX;
	while(hi-lo>=0){
		int mid=(lo+hi)/2;
		if(a[lo]<=a[hi]){
			minn=min(minn,a[lo]);
		}
		if(a[lo]<=a[mid]){ // left half sorted
			minn=min(minn,a[lo]);
			lo=mid+1;
		}
		else{
			minn=min(minn,a[mid]);
			hi=mid-1;
		}
	}
	return minn;
}

BS-7. Find out how many times array has been rotated

minimum je index a ase oi index ei value e totobar rotated kora hoise


int findKRotation(vector<int> &a){
    // Write your code here.  
    int lo=0; int hi=a.size()-1;
    int ans=99999999;
    int ind=-1;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(a[lo]<=a[hi]){
            if(a[lo]<ans){
            ans=min(ans,a[lo]);
            ind=lo;
            }
            
            break;
        }
        if(a[lo]<=a[mid]){
            if(a[lo]<ans){
            ans=min(ans,a[lo]);
            ind=lo;
            }
            lo=mid+1;
        }
        else{
            if(a[mid]<ans){
                ans=min(ans,a[mid]);
                ind=mid;
            }
            hi=mid-1;
        }
    }
    return ind;  
}

same problem with duplicates 

implement with previous knowledge


BS-8. Single Element in Sorted Array

brute force
if(n==1) return a[0] // exception
for(int i=0;i<n;i++){
    if(i==0){
        if(a[i]!=a[i+1]) return a[i];
    }
    else if(i==n-1){
        if(a[i]!=a[i-1]) return a[i];
    }
    else
    {
        if(a[i]!=a[i-1] ans a[i]!=a[i+1]) return a[i];
    }
}

1 1 2 2 3 3 4 5 5 6 6
0 1 2 3 4 5 6 7 8 9 10

if standing index is even and right index(has duplicate and) is odd then the element is on the right
if standing index is odd and right index(has elemenet and ) is even then the element is on the left
 last and 1st element alada kore dekhbo

eikhane unique element er bam pase protek even index er dan pase same element

ar unique element er dan pse protek odd index dan pase same element

int singleNonDuplicate(vector<int>& a)
{
	// Write your code here
	int n=a.size();
	if(n==1) return a[0];
	if(a[0]!=a[1]) return a[0];
	if(a[n-1]!=a[n-2]) return a[n-1];

    // search space k aro choto korse jano corner case easily handle kora jai

	int lo=1;
	int hi=n-1;
	while(hi-lo>=0){
		int mid=(lo+hi)/2;
		if(a[mid]!=a[mid+1] && a[mid]!=a[mid-1]) return a[mid];
		if((mid%2==1 && a[mid]==a[mid-1]) ||(mid%2==0 && a[mid]==a[mid+1])){
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
}

 BS-9. Find Peak Element


 brute force solution
 i==0 hoile a[i]>a[i+1] ar i==n-1 hoile a[i]>a[i-1]
 for(int i=;i<n;i++){
    if(i==0 || a[i]>a[i-1]) && (i==n-1 || a[i]>a[i-1]) return a[i]);
 }
1 2 3 4 5 6 7 8 5
0 1 2 3 4 5 6 7 8 

1 12 14 7 6 5 4 2 1 0
0  1  2 3 4 5 6 7 8 9

1 2 3 4 5 6 1st element peak element

7 6 5 4 3 1 last element peak element

ei 2ta corner case

binary search eu hubohu same concept jodi a[mid]>a[mid-1] taile lo=mid+1 orthat peak pabo right side a or left side a
corner case 


int findPeakElement(vector<int> &a) {
    // Write your code here
    int n=a.size();
    // corner cases
    //1 2 3 4 5 6 7 8
    // 8 7 6 5 4 3 2 1
    if(n==1) return a[0];
    if(a[0]>a[1]) return 0;
    if(a[n-1]>a[n-2]) return n-1;

    // main logic 1 10 14 7 6 5 4 3 2 1 0
    int lo=1;
    int hi=n-2;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]) return mid;
        else if(a[mid]>a[mid-1]) lo=mid+1;
        // additional a[mid]>a[mid+1] and a[mid]>a[mid-1] deya lagbe na ei condition konodin o break hobe na
        // emon case konodin o asbe na je ekta element thke boro arekta element theke choto
        a[mid]>a[mid+1] and a[mid]<a[mid-1] or a[mid]>a[mid-1] and a[mid]<a[mid+1] emon case asbre na
        else hi=mid-1;
    }
    return -1;
}

int findPeakElement(vector<int> &a) {
    // Write your code here
    int n=a.size();
    // corner cases
    //1 2 3 4 5 6 7 8
    // 8 7 6 5 4 3 2 1
    if(n==1) return a[0];
    if(a[0]>a[1]) return 0;
    if(a[n-1]>a[n-2]) return n-1;

    // main logic 1 10 14 7 6 5 4 3 2 1 0
    int lo=1;
    int hi=n-2;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]) return mid;
        else if(a[mid]>a[mid-1]) lo=mid+1;
        else if(a[mid]<a[mid+1]) hi=mid-1;
        // 1 4 1 6 1 ei multiple case er joonne eita likhbo
        else lo=mid+1;
        // or else hi=mid-1; jodi mid 2 index k nirdesh kore taile lo or high k shift korbo

    }
    return -1;
}


BS-10. Finding Sqrt of a number using Binary Search

binary search er ei related problem a always amra range janbo
find the maximum integer which on squaring  <=n ei problem er moddheo pore

brute force approach

n=28;

1 2 3 4 5 6 

for(int i=1;i<=n;i++){
    if(i*i<=n){
        ans=i;
    }
    else break;
}

optimum approach

int floorSqrt(int n)
{
    // Write your code here.
    long long ans=-1;
    int lo=0;
    int hi=n;
    while(hi-lo>=0){
        long long mid=(hi+lo)/2;
        if(mid*mid<=n){
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return ans;
}

binary search er sob problem a sob somoy predicate function neya kaj korte hoi

#include<bits/stdc++.h>
// return 2 if >m
// return 1 if ==m
//   return 0 if <m
long long fun(int n, int mid,int m){
  long long ans=1;
  for(int i=0;i<n;i++){
    ans=ans*mid;

    // overflow case er jonne binary exponentiation or simple kisu change kore
    if(ans>m) return 2;
  }
  if(ans==m) return 1;
  return 0;
}
int NthRoot(int n, int m) {
  // Write your code here.

    int lo=1;
    int hi=m;
    while(hi-lo>=0){
      int mid=(hi+lo)/2;
      if(fun(n,mid,m)==1){
        return mid;
      }
      else if(fun(n,mid,m)==0){
        lo=mid+1;
      }
      else hi=mid-1;
    } 
    return -1; 
}

https://www.codingninjas.com/studio/problems/minimum-rate-to-eat-bananas_7449064?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM
#include<bits/stdc++.h>
using namespace std;
long long pre(vector<int>&v, int mid){
    long long ans=0;
    for(int i=0;i<v.size();i++){
        ans+=ceil((double)v[i] /(double)mid);
    }
    return ans;
}
int minimumRateToEatBananas(vector<int> &v, int h) {
    // Write Your Code Here
    int lo=1,hi=*max_element(v.begin(),v.end());
    int ans=-1;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(pre(v, mid)<=h){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return lo;  

}

or

#include<bits/stdc++.h>
using namespace std;
long long pre(vector<int>&v, int mid){
    long long ans=0;
    for(int i=0;i<v.size();i++){
        ans+=ceil(static_cast<double>(v[i]) / mid);
    }
    return ans;
}
int minimumRateToEatBananas(vector<int> &v, int h) {
    // Write Your Code Here
    int lo=1,hi=*max_element(v.begin(),v.end());
    int ans=-1;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(pre(v, mid)<=h){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return lo;  

}


or
#include<bits/stdc++.h>
using namespace std;
long long pre(vector<int>&v, int mid){
    long long ans=0;
    for(int i=0;i<v.size();i++){
        ans+=ceil(static_cast<double>(v[i]) / mid);
    }
    return ans;
}
int minimumRateToEatBananas(vector<int> &v, int h) {
    // Write Your Code Here
    int lo=1,hi=*max_element(v.begin(),v.end());
    int ans=-1;
    while(hi-lo>=0){
        int mid=(hi+lo)/2;
        if(pre(v, mid)<=h){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;  

}

tc-> o(n)*log(arraay size)

most important kotha

lo jodi impossible a thake taile binary search er por possible a thakbe
hi jodi possible a thake taile binary search er por eta impossible a thakbe 
orthat opposite polarity hobe sob somoy
fffffffffffffttttttttttttttttttt
lo                             hi
taile lo=t; hi=f hobe amdr lagbe t tai sob somoy lo tei value pabo


https://www.codingninjas.com/studio/problems/rose-garden_2248080?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION

adjacent value hisab kora sikhe gese

#include<bits/stdc++.h>
using namespace std;
int ispossible(vector<int>arr, int mid,int k,int m){
	int roses=0,bouquet=0;
	for(int i=0;i<arr.size();i++){
		if(mid>=arr[i]){
			roses++;
			if(roses==k){
				bouquet++;
				if(bouquet==m){	
					return bouquet;
				}
				roses=0;
			}
		}
		else roses=0;
	}
	return false;
}
int roseGarden(vector<int> arr, int k, int m)
{
	int n=arr.size();
	if(m*k>n) return -1;
	int hi=*max_element(arr.begin(), arr.end());
	int lo=*min_element(arr.begin(), arr.end());
	int ans=-1;
	while(hi-lo>=0){
		int mid=lo+(hi-lo)/2;
		
		if(ispossible(arr,mid,k,m)==m){
			ans=mid;
			hi=mid-1;
		}else{
			lo=mid+1;
		}
	}
	return lo;
}

boolean function use kore

#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>arr, int mid,int k,int m){
	int roses=0,bouquet=0;
	for(int i=0;i<arr.size();i++){
		if(mid>=arr[i]){
			roses++;
			if(roses==k){
				bouquet++;
				if(bouquet==m){	
					return true;
				}
				roses=0;
			}
		}
		else roses=0;
	}
	return false;
}
int roseGarden(vector<int> arr, int k, int m)
{
	int n=arr.size();
	if(m*k>n) return -1;
	int hi=*max_element(arr.begin(), arr.end());
	int lo=*min_element(arr.begin(), arr.end());
	int ans=-1;
	while(hi-lo>=0){
		int mid=lo+(hi-lo)/2;
		
		if(ispossible(arr,mid,k,m)==true){
			ans=mid;
			hi=mid-1;
		}else{
			lo=mid+1;
		}
	}
	return ans;
}

striver solution

int roseGarden(vector<int> arr, int k, int m)
{
	int n=arr.size();
    int lo=*min_element(arr.begin(),arr.end());
    int hi=*max_element(arr.begin(),arr.end());
    if(k*m>n) return -1;
    while(hi-lo>=0){
        int mid=lo+(hi-lo)/2;
        int roses=0, bou=0;
            for(int i=0;i<n;i++){
                if(arr[i]<=mid) roses++;
                else{
                    bou+=(roses/k);
                    roses=0;
                }
            }
            bou+=(roses/k);
        if(bou>=m){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return lo;

    time complexity o(n*log(max-min))

    https://www.codingninjas.com/studio/problems/smallest-divisor-with-the-given-limit_1755882?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=
    

    int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int n=arr.size();
	int lo=1,hi=*max_element(arr.begin(),arr.end());
	while(hi-lo>=0){
		int mid=lo+(hi-lo)/2;
		int sum=0;
		for(int i=0;i<n;i++){
			int a=ceil((double)arr[i]/(double)mid);
			sum+=a;
		}
		if(sum>limit){ //sum>=limit hobe na KARON oita search range er baire
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	return lo;
}

https://www.codingninjas.com/studio/problems/capacity-to-ship-packages-within-d-days_1229379?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION

int leastWeightCapacity(vector<int> &a, int d)
{
    // Write your code here.
    int n=a.size();
    int lo=*max_element(a.begin(),a.end());
    int hi=0;
    for(int i=0;i<n;i++){
        hi+=a[i];
    }
    while(hi-lo>=0){
        int mid=lo+(hi-lo)/2;
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(sum+a[i]<=mid){
                sum+=a[i];
            }
            else{
                cnt++;
                sum=a[i];
            }
        }
        if(sum!=0){
            cnt++;
        }
        if(cnt>d) lo=mid+1;
        else hi=mid-1;
    }
    return lo;
}


time complexity =o(n*log(sum-max))
}


aggressive cow problem
https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
bool ispossible(vector<int>stalls, int mid, int k){
    int n=stalls.size();
    int cowcnt=1;
    int lastpos=stalls[0];
    for(int i=1;i<=n-1;i++){
        if(stalls[i]-lastpos>=mid){
            cowcnt++;
            lastpos=stalls[i];
        }
        if(cowcnt>=k)return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int lo=1;
    int hi=stalls[n-1]-stalls[0];
    while(hi-lo>=0){
        int mid=lo+(hi-lo)/2;
        if(ispossible(stalls, mid, k)==true){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    return hi;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    bool ans=false;
    int n=stalls.size();
    int lo=1;
    int hi=stalls[n-1]-stalls[0];
    while(hi-lo>=0){
        int mid=lo+(hi-lo)/2;
        int cowcnt=1;
        int lastpos=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-lastpos>=mid){
                cowcnt++;
                lastpos=stalls[i]; 
            }
        }
        if(cowcnt>=k){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return hi;
}
*/














