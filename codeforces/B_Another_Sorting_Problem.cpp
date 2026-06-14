#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int k=0, maxik=0;
    for(int i=0;i<n-1;i++){
        k=a[i]-a[i+1];
        maxik=max(k,maxik);
    }
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]) a[i]+=maxik;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cout<<"NO"<<endl; 
            return;
        }
    }
    cout<<"YES"<<endl;
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