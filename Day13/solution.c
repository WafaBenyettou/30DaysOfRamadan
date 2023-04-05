#include<bits/stdc++.h>
#define pb push_back
#define int long long int
#define vec vector<int>
#define REP(i,a,b) for(i=a;i<b;i++)
using namespace std;
int mod=1e9+7;
int fact[3000001];
void factorial()
{
  fact[1]=1,fact[0]=1;
  for(int i=2;i<3000001;i++)
    fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
}
int inverse(int n)
{
  n%=mod;
  int res=1,b=mod-2;
  while(b>0)
  {
    if(b&1)
        res=((res%mod)*(n%mod))%mod;
    n=((n%mod)*(n%mod))%mod;
    b>>=1;
  }
  return res%mod;
}
main()
{
  factorial();
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    cout<<((2*((fact[n+k+1]%mod)*((inverse(fact[k+2])%mod)*(inverse(fact[n-1])%mod)%mod)))%mod +mod -n)%mod<<"\n";
  }
}