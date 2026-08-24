#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<pair<ll , ll>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    vector<int>ans(n);
    int pntr=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i].first;
        if(i+1==n || a[i+1].first>sum){
            while(pntr<=i){
                ans[a[pntr].second]=i;
                pntr++;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
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