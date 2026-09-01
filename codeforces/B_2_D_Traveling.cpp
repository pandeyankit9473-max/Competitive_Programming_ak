#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,k,s,t; cin>>n>>k>>s>>t;
    vector<ll>x(n+1),y(n+1);
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    ll ans=abs(x[s]-x[t])+abs(y[s]-y[t]);
    ll disS=1e17, disT=1e17;
    for(int j=1;j<=k;j++){
        disS=min(disS, abs(x[s]-x[j])+abs(y[s]-y[j]));
        disT=min(disT,abs(x[t]-x[j])+abs(y[t]-y[j]));
    }
    ans=min(ans, disS+disT);
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