
#include<bits/stdc++.h>
#define pb push_back
#define pii pair<int,int>
#define int long long int
#define vec vector<int>
#define inf 1e18
using namespace std;
int n,a[100001];
int check(int x)
{
  map<int,int> h;
  set<pii> s;
  for(int i=0;i<n;i++)
    h[a[i]]++;
  for(auto it: h)
    s.insert({it.second,it.first});
  for(auto it=s.begin();it!=s.end();it++)
    h[it->second]--;
  bool flag=true;
  int b[n+1];
  for(int i=0;i<n && flag;i++)
  {
    if(s.empty())
    {
      flag=false;
      break;
    }
    auto it=s.end();
    it--;
    b[i]=it->second;
    s.erase(it);
    if(i>=x && h[b[i-x]]>0)
    s.insert({h[b[i-x]],b[i-x]}),h[b[i-x]]--;
  }
  return flag;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt=1;
  cin>>tt;
  while(tt--)
  {
    cin>>n;
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    int l=0,r=n,ans=0;
    while(l<=r)
    {
      int mid=l+(r-l)/2;
      if(check(mid))
            ans=max(ans,mid),l=mid+1;
      else
            r=mid-1;
    }
    cout<<ans<<"\n";
  }
}