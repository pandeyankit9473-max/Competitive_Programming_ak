#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n, a,b;
    cin>>n>>a>>b;
    ll ans=0;
    if((ll)3*a<b){
        cout<<(ll)n*a<<endl;
        return;
    }
    else{
        ll g=n/3;
        ll rem= n%3;
        ans+=g*b;
        if(rem*a<b) ans+=rem*a;
        else ans+=b;
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