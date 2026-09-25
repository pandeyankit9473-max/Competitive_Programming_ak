#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(auto&it:a) cin>>it;
     int ans=gcd(a[0],a[n-1]);
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