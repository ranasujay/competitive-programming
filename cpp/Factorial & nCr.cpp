#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
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

int fact[N], invfact[N];

int power(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res = 1ll * res * a % mod;
		a = 1ll * a * a % mod;
		b >>= 1;
	}
	return res;
}
 
 
void compute_factorial() {
	fact[0] = invfact[0] = 1;
	for (int i = 1; i < N; i++) {
		fact[i] = 1ll * fact[i - 1] * i % mod;
		invfact[i] = power(fact[i], mod - 2);
	}
}
 
int nCr(int n, int k) {
	if (k > n) return 0;
	return 1ll * fact[n] * invfact[k] % mod * invfact[n - k] % mod;
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
