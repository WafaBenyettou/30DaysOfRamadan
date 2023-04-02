#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e5+9,K=109,MOD=1e9+7;
ll n,dp[K][N],m,a[N],c[N][K],l,r,k;
 int main() {
     	cin>>n>>m;
     	for (int i=1;i<=n;i++) cin>>a[i];

     	for (int i=0;i<N;i++) for (int j=0;j<K;j++) c[i][j]=(i>=j?(j==0?1:(c[i-1][j-1]+c[i-1][j])%MOD):0);

         while (m--){
         cin>>l>>r>>k,dp[k+1][l]=(dp[k+1][l]+1)%MOD;
            for (int i=1;i<=k+1;i++) dp[i][r+1]=(dp[i][r+1]-c[k+1-i+r-l][k+1-i]+MOD)%MOD;
         }
         
     	for (int i=K-2;i>=0;i--) for (int j=0;j<N;j++) dp[i][j]=(dp[i][j]+((dp[i+1][j]+(j?dp[i][j-1]:0))%MOD+MOD)%MOD)%MOD;
     	for (int i=1;i<=n;i++) cout<<((a[i]+dp[1][i])%MOD+MOD)%MOD<<" ";
     }
