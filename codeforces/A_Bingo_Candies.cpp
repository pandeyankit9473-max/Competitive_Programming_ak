#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
   bool flag=true;
    unordered_map<int,int>mp;
    for(int i=0;i<n*n;i++){
        int x; cin>>x;
        mp[x]++;
        if(mp[x]>n*(n-1)) flag=false;
    }
     if(flag) cout<<"YES"<<endl;
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