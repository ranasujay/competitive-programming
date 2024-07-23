#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define ld long double
#define eb emplace_back
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int mod=1000000007;
using namespace std;

const int MAXN = 1e6;
ll fact[MAXN],invfact[MAXN];

ll power(ll a,ll b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        ll X = power(a,b/2);
        return (X*X)%mod;
    }
    else{
        ll X = power(a,b/2);
        ll ans = (X*X)%mod;
        return (ans*a)%mod;
    }
}

ll inverse(ll a){
    return power(a,mod-2);
}

void compute_factorial(){
    fact[0]=1;
    invfact[0]=1;
    for(int i=1;i<MAXN;i++){
        fact[i]=(i*fact[i-1])%mod;
        invfact[i]=inverse(fact[i]);
    }
}
ll nCr(ll N, ll R){
    if(N<0 || R<0 || R>N){
        return 0;
    }
    else if(N==R){
        return 1;
    }
    ll num = fact[N];
    ll dem = (inverse(R)*inverse(N-R))%mod;
    return (num*dem)%mod;
}


void solve(){
    int n,r;
    compute_factorial();

    cin >> n >> r;
    cout << n << r << endl;
    cout << fact[n] << endl;
    cout << invfact[n] << endl;
    cout << nCr(n,r) << endl;
}


     

signed main() {
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
	return 0;
}
