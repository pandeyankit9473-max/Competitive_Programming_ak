#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    string a; cin>>a;
    string b; cin>>b;
    bool possible=true;
    ll ans=0;
    for(int i=0;i<2;i++){
        vector<int>p,q;
        for(int j=i;j<n;j+=2){
            if(a[j]=='1') p.push_back(j);
            if(b[j]=='1') q.push_back(j);
        }
        if(p.size()!=q.size()){ possible=false; break;}
        for(int i=0;i<p.size();i++){
            ans+=abs(p[i]-q[i]);
        }
    }
    if(possible) cout<<ans/2<<endl;
    else cout<<-1<<endl;
    
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