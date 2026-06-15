#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        int x=a[i];
        while(x%2==0) x/=2;
        int psn=i;
        while(psn%2==0)psn/=2;
        if(x!=psn){
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