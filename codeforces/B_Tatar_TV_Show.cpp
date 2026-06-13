#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> cnt(k,0);
    for(int i=0;i<n;i++) if(s[i]=='1') cnt[i]++;
    bool ok=true;
    for(int i=0;i<k;i++) if(cnt[i]%2) ok=false;
    cout << (ok?"YES":"NO") << "\n";
}
    
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}