#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n),b(n);
    for(auto&x:a) cin>>x;
    for(auto&y:b) cin>>y;
   
    for(int i=0;i<n;i++){
        if(a[i]>b[i]) swap(a[i],b[i]);
    }
    ll mx = *max_element(a.begin(), a.end());
    ll sum=0; for(int i=0;i<n;i++) sum+=b[i];
    cout<<mx+sum<<endl;
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