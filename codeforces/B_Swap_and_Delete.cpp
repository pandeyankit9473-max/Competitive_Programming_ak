#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; cin>>s;
   int n=s.size();
    int c0=0,c1=0,Ts=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') c0++;
        else c1++;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0' && c1>0) c1--, Ts++;
        else if(s[i]=='1' && c0>0) c0--, Ts++;
        else break;
    }
    cout<<n-Ts<<endl;
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