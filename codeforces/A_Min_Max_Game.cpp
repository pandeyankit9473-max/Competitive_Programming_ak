#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(auto&it:a) cin>>it;
    int cnt0=0, cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) cnt0++;
        else cnt1++;
    }
    if(cnt1>=cnt0)cout<<"Bessie"<<endl;
    else cout<<"Elsie"<<endl;
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