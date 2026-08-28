#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,q; cin>>n>>q;
    vector<int>a(n),x(q);
    for(auto &it:a) cin>>it;
    for(auto &z:x) cin>>z;
    ll prev=31;
    for(int i=0;i<q;i++){
        if(x[i]>=prev) continue;
         int num=pow(2,x[i]);
        for(int j=0;j<n;j++){
            if(a[j]%num==0)a[j]+=num/2;
        }
        prev=x[i];
    }
    for(int y:a) cout<<y<<" ";
    cout<<endl;
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