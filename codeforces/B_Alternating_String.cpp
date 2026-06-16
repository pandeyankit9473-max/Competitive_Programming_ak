#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; cin>> s;
    int n= s.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i-1]==s[i]) cnt++;
        if(cnt>2){
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