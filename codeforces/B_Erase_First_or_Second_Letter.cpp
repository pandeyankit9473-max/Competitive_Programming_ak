#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int vis[26]={0};
    int ans=0;
    for(int i=0;i<n;i++){
        if(!vis[s[i]-'a']){
            ans += n-i;
            vis[s[i]-'a']=1;
        }
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