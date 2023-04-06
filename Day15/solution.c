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
       ios_base::sync_with_stdio(false);
       ctie(NULL);
       cotie(NULL);
       factorial();
       int t;
       cin>>t;
       int test=1;
       while(t--)
       {
         int n,k;
         cin>>n>>k;
         int a[n],i;
         for(i=0;i<n;i++)
             cin>>a[i];
         sort(a,a+n);
         int ans=0;
         n--,k--;
         while(n>=k)
         {
           int res=(fact[n]%mod);
           res=((res%mod)*(inverse(fact[k])%mod))%mod;
           res=((res%mod)*(inverse(fact[n-k])%mod))%mod;
           res=((a[n]%mod)*(res%mod))%mod;
           ans=((ans%mod)+(res%mod))%mod;
           n--;
         }
         cout<<"Case #"<<test<<": "<<ans<<"\n";
         test++;
       }
     } 
