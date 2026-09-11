#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n; 
    int odd=0, evn1=0,evn2=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x&1) odd++;
        else{
            if((x%4))evn1++;
            else evn2++;
        }
    }
    cout<<max({odd,evn1,evn2})<<endl;
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