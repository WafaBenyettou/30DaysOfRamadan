   #include<bits/stdc++.h>
    #define pb push_back
    #define pii pair<int,int>
    #define int long long int
    #define vec vector<int>
    #define mp map<int,int>
    #define inf 1e18
    using namespace std;
    vector<int> v;
     int mod=998244353;
     int32_t main()
     {
       ios_base::sync_with_stdio(false);
     cin.tie(NULL);
       cout.tie(NULL);
       int tt=1;
       //cin>>tt;
       while(tt--)
       {
         int n,k;
         cin>>n>>k;
         int l[n],r[n],i;
         for(i=0;i<k;i++)
             cin>>l[i]>>r[i];
         int a[n+1]={0};
         for(i=0;i<k;i++)
         {
           for(int j=l[i];j<=r[i];j++)
           if(!a[j])
           {
             a[j]++;
             v.pb(j);
         }
       }
       int x=v.size();
         sort(v.begin(),v.end());
         int dp[n+1]={0};
         dp[1]=1;
         for(i=2;i<=n;i++)
         {
           dp[i] = ((dp[i]%mod) + (dp[i-1]%mod))%mod;
           for(int j=0;j<k;j++)
           {
              dp[i] = ((dp[i]%mod) + ((dp[max(i-l[j],(int)0)]%mod - dp[max(i-r[j]-1,(int)0)]%mod + mod)%mod)%mod)%mod;
           }
         }
         cout<<(dp[n]-dp[n-1]+mod)%mod<<"\n";
       }
     }
