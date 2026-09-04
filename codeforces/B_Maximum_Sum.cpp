#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,k; cin>>n>>k;
    vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
    sort(a.begin(),a.end());
   vector<ll>pre(n);
   pre[0]=a[0];
   for(int i=1;i<n;i++){
    pre[i]=a[i]+pre[i-1];
   }
   ll ans=0;
   for(int first=0;first<=k;first++){
    int second=k-first;
    int left=2*first;
    int right=n-second-1;
    ll sum= pre[right]-(left==0?0:pre[left-1]); // when left==0 There is nothing to subtract.
    ans=max(ans,sum);
    
   }
    cout<<ans<<endl;

//    TC: O(n log n)
//     SC: O(n)

    
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}