#inculde<bits/stdc++.h>
using namespace std;
int N = 100000;
bool sieve[100001];
void creatSieve(){
    for(int i=0;i<=N;i++){
        sieve[i]=true;
    }
    for(int i=2;i*i<=N;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=N;j+=i){
                sieve[j]=false;
            }
        }
    }
}
int main(){
  creatSieve();
  if(sieve[111]){
    cout<<"YES"<<endl;
  }
  else{
    cout << "NO"<< endl;
  }
}
