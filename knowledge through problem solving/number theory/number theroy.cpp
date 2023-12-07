// print the divisors
/* #include<bits/stdc++.h>
using namespace std;

vector<int>divisor;
int main(){
    int n; cin>>n;
    int sq=sqrt(n);
    for(int i=1;i<=sq;i++){
        if(n%i==0){
            divisor.push_back(i);
            if(n/i!=i) divisor.push_back(n/i);
        } 
    }
    sort(divisor.begin(),divisor.end());
    for(int it: divisor){
        cout<<it<<" ";
    }cout<<endl;
} */

// print all the divisors from 1 to n 
/* 
#include<bits/stdc++.h>
using namespace std;
vector<int>divisor[1000007];
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){ 
        int sq=sqrt(i);
        for(int j=1;j<=sq;j++){
            if(i%j==0){
            divisor[i].push_back(j);
            if(i/j!=j)divisor[i].push_back(i/j);
            }

        }
        sort(divisor[i].begin(),divisor[i].end());
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" =";
        for(auto it: divisor[i]){
            cout<<it<<" ";
        }cout<<endl;
    }
} */

/* #include<bits/stdc++.h>
using namespace std;
vector<int>divisor[100+123];
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int sq=sqrt(i);
        for(int j=1;j<=sq;j++){
            if(i%j==0){
                divisor[i].push_back(j);
                if(i/j!=j){
                    divisor[i].push_back(i/j);
                }
            }
            sort(divisor[i].begin(),divisor[i].end());
        }
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" :";
        for(auto it:divisor[i]){
            cout<<it<<" ";
        }cout<<endl;
    }
} */
/* 

more optimized version

#include<bits/stdc++.h>
using namespace std;
vector<int>divisor[100+123];
int main(){
    int n; cin>>n; 
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            divisor[j].push_back(i);
        }    
    }
    for(int i=1;i<=n;i++){
        for(auto it:divisor[i]){
            cout<<it<<" ";
        }cout<<endl;
    }
}

https://atcoder.jp/contests/abc172/tasks/abc172_d

counting the number of divisors

#include<bits/stdc++.h>
using namespace std;
const int mx=1e7+123;
int divisor_cnt[mx];
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            divisor_cnt[j]++;
        }
    }
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=(1LL*i*divisor_cnt[i]);
    }
    cout<<sum<<endl;
}
// prime generator

*/
/* 

prime generator


#include<bits/stdc++.h>
using namespace std;
const int mx=1e9+123;
bool is_prime[mx];
vector<int>prime;
void primegen(int n){
    memset(is_prime,1,sizeof(is_prime));
        for(int i=2;i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            is_prime[j]=0;
        }
    }
    
    for(int i=2;i<=n;i++){
        if(is_prime[i]==1) prime.push_back(i);
    }
}
int main()
{
    int n; cin>>n;
    primegen(n);
    for(int it:prime){
        cout<<it<<" ";
    }cout<<endl;
}


//bitwise seive

const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int> prime;
 
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

//normal seive

const int MX = 5e4+123;
bool seive[MX];
vi prime;
 
void seiveGen(int limit) {
    limit += 100;
    int sqrtn = sqrt(limit);
    for(int i = 3; i <= sqrtn; i += 2) {
        if(!seive[i>>1]) {
            for(int j = i * i; j < limit; j += i + i) {
                seive[j>>1] = 1;
            }
        }
    }
    
    prime.push_back(2);
    for(int i = 3; i < limit; i += 2) {
        if(!seive[i>>1]) prime.PB(i);
    }
}


https://www.spoj.com/problems/TDPRIMES/




#include<bits/stdc++.h>
using namespace std;
 
const int MX = 1e8+123;
bool seive[MX];
vector<int> prime;
 
void seiveGen(int limit) {
    limit += 100;
    int sqrtn = sqrt(limit);
    for(int i = 3; i <= sqrtn; i += 2) {
        if(!seive[i>>1]) {
            for(int j = i * i; j < limit; j += i + i) {
                seive[j>>1] = 1;
            }
        }
    }
    
    prime.push_back(2);
    for(int i = 3; i < limit; i += 2) {
        if(!seive[i>>1]) prime.push_back(i);
    }
}
int main(){
    int n=1e8;
    seiveGen(n);
    int sz=prime.size();
    for(int i=0;i<=sz;i+=100){
        if(prime[i]<n)cout<<prime[i]<<endl;
    }
}

https://codeforces.com/contest/776/problem/B


#include<bits/stdc++.h>
using namespace std;
//bitwise seive

const int MX = 1e5+123;
bitset<MX> is_prime;
vector<int> prime;
 
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}
int main(){
    int lim=1e5;
    primeGen(lim);
    int n; cin>>n;
    vector<int>ans;
    set<int>as;
    for(int i=2;i<=(n+1);i++){
        if(is_prime[i]==1){
            ans.push_back(1);
            as.insert(1);
        }else {
            ans.push_back(2);
            as.insert(2);
        } 
    }
    if(as.size()==1)cout<<1<<endl;
    else cout<<2<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

more optimized solutiton

#include<bits/stdc++.h>
using namespace std;

//bitwise seive

const int MX = 1e5+123;
bitset<MX> is_prime;
vector<int>prime;
 
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

int main(){
    int n; cin>>n;
    int lim=1e5;
    primeGen(lim);
    (n==1 or n==2) ? cout<<1<<endl:cout<<2<<endl;
    for(int i=2;i<=(n+1);i++){
        if(is_prime[i]==1) cout<<1<<" ";
        else cout<<2<<" ";
    }
}


https://www.spoj.com/problems/HS08PAUL/


#include<bits/stdc++.h>
using namespace std;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bitwise seive

const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int>prime;
 
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

vector<int>ans(MX);

int main(){
    optimize();
    int lim=1e7;
    primeGen(lim);
    // je je 
    for(int x=1;x<=3200;x++){
        for(int y=1;y<=60;y++){
            long long a=1LL*(x*x)+1LL*(y*y*y*y);
            if(a>1LL*lim) continue;
            if(is_prime[a]){
                ans[a]=1;
            }
        }
    }
    // prefix sum hisab kortese
    for(int i=1;i<lim;i++) ans[i]+=ans[i-1];
    int testcase; cin>>testcase;
    while(testcase--){
        int d; cin>>d;
        cout<<ans[d]<<endl;
    }
}

//practice
#include<bits/stdc++.h>
using namespace std;

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//bitwise seive

const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int>prime;
vector<int>ans(MX);
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

int main(){
    optimize();
    int lim=1e7;
    primeGen(lim);

    x er loop cholbe x^2=10000000-1 hoile x er value = 3160 ==3200
    y er loop cholbe y^4=10000000-1 hoile y er value = 56 == 60

    for(int i=1;i<=3200;i++){
        for(int j=1;j<=60;j++){
            long long a=1LL*(i*i)+1LL*(j*j*j*j);
            if(a>1LL*lim) continue; // 3200 ar 60 dhorar jonnne extra condition
            if(is_prime[a]==1){
                ans[a]=1;
            }
        }
    }

    // prefix sum deya kon index er prime gula x^2+y^4 condition fill kore bjte parbo

    for(int i=1;i<=lim;i++) ans[i]+=ans[i-1];

    int testcase; cin>>testcase;
    while(testcase--){
        int b; cin>>b;
        cout<<ans[b]<<endl;
    }
}




//prime factorization

vector<long long> factorization( long long n )
{
    vector<long long> ret;

    for ( auto p : prime ) {
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 ) {
            while ( n % p == 0 ) {
                ret.push_back ( p );
                n /= p;
            }
        }
    }

    if ( n > 1 ) ret.push_back(n);

    return ret;
}


https://vjudge.net/problem/UVA-583


 just prime divisor gula print korte hobe

#include<bits/stdc++.h>
using namespace std;
//bitwise seive

const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int>prime;
 
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}
//prime factorization

vector<long long> factorization( long long n )
{
    vector<long long> ret;

    for ( auto p : prime ) {
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 ) {
            while ( n % p == 0 ) {
                ret.push_back ( p );
                n /= p;
            }
        }
    }

    if ( n > 1 ) ret.push_back(n);

    return ret;
}
vector<long long>ans;
int main(){
    int lim=1e7;
    primeGen(lim);
    long long n,p;
    while(cin>>n){
        if(n==0) break;
        p=n;
        if(n<0) {
            p=(-1)*n;
        }
        ans=factorization(p);
        if(n<0){
            ans.push_back(-1);
        }
        sort(ans.begin(),ans.end());
        cout<<n<<" = ";
        for(int i=0;i<ans.size()-1;i++){
            
            cout<<ans[i]<<" x ";
        }cout<<ans[ans.size()-1]<<endl;
    }
} 


cps solution

 optimize();

    primeGen(1e5);

    long long n;

    while ( cin >> n ) { 
        if ( n == 0 ) break; 
        vector<long long> ans = factorization(abs(n));

        reverse ( ans.begin(), ans.end() );
        if ( n < 0 ) ans.push_back ( -1 );
        reverse ( ans.begin(), ans.end() );

        cout << n << " = " << ans[0];
        for ( int i = 1; i < ans.size(); i++ ) cout << " x " << ans[i];
        cout << endl;
    }

https://vjudge.net/problem/UVA-11466

largest prime divisor print korte hobe



#include<bits/stdc++.h>
using namespace std;
//bitwise seive
const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

//prime factorization

// n pathanor age absolute value kore neta hobe

vector<long long> factorize (long long n)
{
    vector<long long> ret;
    for ( auto p : prime ) {
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 ) {
            ret.push_back (p);

            while ( n % p == 0 ) {
                n /= p;
            }
        }
    }

    if ( n > 1 ) ret.push_back(n);

    return ret;
}


int main(){
    int lim=1e7;
    primeGen(lim);
    long long n;
    while(cin>>n){
        if(n==0)break;
        n=abs(n);// must
        vector<long long>ans=factorize(n);
        if(ans.size()<=1)cout<<-1<<"\n";
        else cout<<ans.back()<<"\n";
    }
}


// prime counting function x/ln(x)



24=2*2*2*3;
36=2*2*3*3;
gcd(24,36)=2*3;
lcm(24,36)=2*2*2*3*3;
1st a prime factor gula ber korbo
common power er minimum value nebo etai gcd
common power er max value hoilo lcm

https://codeforces.com/contest/26/problem/A/

*/

/* 
#include<bits/stdc++.h>
using namespace std;
//bitwise seive

const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int>prime;
 
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}
//prime factorization

set<long long> factorization( long long n )
{
    set<long long> ret;

    for ( auto p : prime ) {
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 ) {
            while ( n % p == 0 ) {
                ret.insert ( p );
                n /= p;
            }
        }
    }

    if ( n > 1 ) ret.insert(n);

    return ret;
}


vector<set<long long>>ans;

int main(){
    int lim=3000;
    primeGen(lim);
    int n; cin>>n;
    for(long long i=1;i<=n;i++){
        set<long long>temp=factorization(i);
        ans.push_back(temp);
    }
    int cnt=0;
    for(auto it: ans){
        if(it.size()==2)cnt++;
    }
    cout<<cnt<<endl;


}

#include<bits/stdc++.h>
using namespace std;
//bitwise seive

const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int>prime;
 
void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

//prime factorization
// unique prime gula print korar  jonne

vector<long long> factorize (long long n)
{
    vector<long long> ret;
    for ( auto p : prime ) {
        if ( 1LL * p * p > n ) break;
 
        if ( n % p == 0 ) {
            ret.push_back (p);
 
            while ( n % p == 0 ) {
                n /= p;
            }
        }
    }
 
    if ( n > 1 ) ret.push_back(n);
 
    return ret;
}




int main(){
    int lim=1e6;
    primeGen(lim);
    int testcase; cin>>testcase;
    for(int t=1;t<=testcase;t++){
        int n; cin>>n;
        set<long long>ans; 
        for(int i=1;i<=n;i++){
            long long a; cin>>a;
            vector<long long>anss=factorize(a);
            for(auto it:anss){
                ans.insert(it);
            }
        }
        cout<<"Case #"<<t<<": "<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it<<endl;
        }
    }
}


signed and unsigned bit
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=INT_MAX;
    cout<<a<<endl;
    int b=(1LL<<31)-1; // int datatype 32 bit store korleu 1 ta bit thake signed bit
    cout<<b<<endl;
    unsigned int c=(1LL<<32)-1;
    cout<<c<<endl;

}