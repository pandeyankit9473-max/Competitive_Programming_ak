#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    for(auto &it:a) cin>>it;
    ll ans=0;
    for(int k=1;k<=n;k++){
        if(n%k!=0)continue;
        ll maxi=LLONG_MIN, mini=LLONG_MAX;
        for(int i=0;i<n;i+=k){
            ll sum=0;
            for(int j=i;j<i+k;j++){
                sum+=a[j];
            }
            maxi=max(sum,maxi);
            mini=min(sum,mini);
        }
        ans=max(ans, maxi-mini);
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