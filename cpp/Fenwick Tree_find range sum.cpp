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
#define vi vector<int>
const int mod=1000000007;
// const long long MAXN = 6e5 + 10, B = 809;
using namespace std;

ll gcd(ll a, ll b) { return (b == 0) ? (a) : (gcd(b, a %= b)); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }


// ************ Fenwick Tree works on one base indexing ****************************
// ************ so carefull on calling the function argument ************************

class fenwickTree{
    int n;
    vector<int>freq;
    public:
    fenwickTree(int sz){
        n = sz;
        freq.resize(n,0);
    }

    public:

    void update(int i, int num){
        while(i<n){
            freq[i]+=num;
            i += (i&(-i));
        }
    }
    int sum(int i){
        int s = 0;
        while(i>0){
            s+=freq[i];
            i -= (i&(-i));
        }
        return s;
    }
    int rangeSum(int l, int r){
        return sum(r)-sum(l-1);
    }
};


void solve(){
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    fenwickTree fq(n+1);
    for(int i=0;i<n;i++){
        fq.update(i+1,a[i]);
    }
    cout << fq.rangeSum(5,5) << endl;


    
}

signed main() {
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    #endif
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
	return 0;
}
