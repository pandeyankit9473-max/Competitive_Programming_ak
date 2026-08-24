#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k; cin>>n>>k;
    int a[n], b[n];
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    int maxi=0, sum=0, ans =0;
    for(int i=0;i<min(n,k);i++){
        sum+=a[i];
        maxi=max(maxi,b[i]);
        ans=max(ans, sum+(k-i-1)*maxi);
    }
    cout<<ans<<endl;
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