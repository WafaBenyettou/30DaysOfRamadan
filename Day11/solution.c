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
       cin.tie(NULL);
       cout.tie(NULL);
       factorial();
       while(1)
       {
         int n;
         cin>>n;
         if(n==0)
             return 0;
         int a[n],b[n],c[n],i;
         for(i=0;i<n;i++)
             cin>>a[i];
         for(i=0;i<n;i++)
             cin>>b[i];
         for(i=0;i<n;i++)
             c[i]=abs(a[i]-b[i]);
         int sum=0;
         for(i=0;i<n;i++)
             sum+=c[i];
         int ans=fact[sum]%mod;
         for(i=0;i<n;i++)
             ans=(ans*inverse(fact[c[i]]))%mod;
         cout<<ans<<"\n";
       }
     } 
