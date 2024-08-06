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

const int N = 1e6+1;
ll fact[N + 1];
ll InvNum[N + 1];
ll Invfact[N + 1];

 
void invOfNum(){
    InvNum[0] = InvNum[1] = 1;
    for (int i = 2; i <= N; i++)
        InvNum[i] = InvNum[mod % i] * (mod - mod / i) % mod;
}
void invOfFact(){
    Invfact[0] = Invfact[1] = 1;
    for (int i = 2; i <= N; i++)
        Invfact[i] = (InvNum[i] * Invfact[i - 1]) % mod;
}
void factorial(){
    fact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}
void compute_factorial(){
    factorial();
    invOfNum();
    invOfFact();
}
ll nCr(ll N, ll R){
    ll ans = ((fact[N] * Invfact[R])% mod * Invfact[N - R])% mod;
    return ans;
}
 
void solve(){
    int n,r;
    compute_factorial();
    cin >> n >> r;
    cout << n << r << endl;
    cout << fact[n] << endl;
    cout << Invfact[n] << endl;
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
