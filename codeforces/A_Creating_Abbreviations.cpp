#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n , m; cin>>n>>m;
    vector<bool>avl(26);
    for(int i=0;i<n;i++){
        string s; cin>>s;
        avl[s[0]-'a']=true;
    }
    bool found=true;
    for(int i=0;i<m;i++){
        string abbr; cin>>abbr;
        for(int i=0; i<abbr.length();i++){
            if(!avl[abbr[i]-'A']){
             found=false; break;
            }
        }
    }
    cout<<(found ? "YES")
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