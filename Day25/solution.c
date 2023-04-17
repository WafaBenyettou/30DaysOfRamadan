
#include<bits/stdc++.h>
using namespace std;
 
//common file for PBDS(Policy based data structure, here we use orderedset)
#include<ext/pb_ds/assoc_container.hpp>
// including tree_order_statistics_node_update
#include<ext/pb_ds/tree_policy.hpp>
//namespace
using namespace __gnu_pbds;
#define int long long

//macro definition
#define ordered_set tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update>
 
#define ld long double
#define endl "\n"
const int mod=1000000007;
const int MAX=100005;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
 
const int bit=31;

signed main(){
    int t=1;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        ordered_set st;
        
        int ans=0;
        int tim=0;
        
        for(int i=n-1;i>=0;i--){
            //number of elements strictly less than l-arr[i]
            int lo=st.order_of_key({l-arr[i],-1});
            
            //number of elements strictly less than r-arr[i]
            int hi=st.order_of_key({r-arr[i],INT_MAX});
            st.insert({arr[i],tim++});
            ans+=(hi-lo);
        }
        cout<<ans<<endl;
    }
    return 0;
}