#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    int cnt=0;
    bool ok=false;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x>=2) cnt++;
        if(x>=3) ok=true;
    }
    if(cnt>=2 || ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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