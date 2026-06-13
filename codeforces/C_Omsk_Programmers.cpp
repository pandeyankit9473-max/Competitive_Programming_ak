#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll a,b,x;
    cin>>a>>b>>x;
    ll ans ;
    ll op=0;
     ans=abs(a-b);
    while(a>0 || b>0){
        if(a>b) a/=x;
        else b/=x;
        op++;
        ans=min(ans,op+abs(a-b));
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