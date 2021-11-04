// Author: Jay Sabale, ElProfesor._.

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;
typedef long double ldb;
typedef pair <ll, ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;

typedef tree<ll, null_type,less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<ll, ll,less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_map;

#define int long long
#define __gcd gcd
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define mod 1e9+1
#define mod2 998244353
#define PI acos(-1.0)

#define forz(i, n) for (int i = 0; i < n; i++)
#define rforz(i, n) for (int i = n - 1; i >= 0; i--)

// Printing Data :
#define pvec(v) forz(i,v.si) cout<<v[i]<<" "; cout<<"\n";
#define parr(arr, n) forz(i,n) cout<<arr[i]<<" "; cout<<"\n";
 
#define p1(i) cout<<i<<"\n"
#define p2(i, j) cout<<i<<" "<<j<<"\n"
#define p3(i, j, k) cout<<i<<" "<<j<<" "<<k<<"\n"
#define p4(i, j, k, l) cout<<i<<" "<<j<<" "<<k<<" "<<l<<"\n"

// Debugging :
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

ll power(ll x,ll y){ll res=1; x=x;while(y>0){if(y&1) res=(res*x);y=y>>1;x=(x*x);}return res;} 

ll power(ll x,ll y,ll p){ll res=1; x=x%p;while(y>0){if(y&1) res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;} 

// CODE BEGINS :
void solve(){
    
}

signed main(){
    ios_base::sync_with_stdio(0), cin.tie(NULL);

    ll t=1; 
    // cin>>t;

    while(t--){
        solve();
    }
    
    return 0;
}