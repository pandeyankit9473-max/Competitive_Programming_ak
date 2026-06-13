#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; cin>>s;
    ll n=s.size();
    ll mx=0;
    vector<ll>pf(n),sf(n);
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='2') cnt++;
        pf[i]=cnt;
    }
    cnt=0;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='1' || s[i]=='3') cnt++;
        sf[i]=cnt;
    }
    for(ll i=0;i<n;i++){
         mx=max(mx,pf[i]+sf[i]);
    }
    cout<<n-mx<<endl;
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