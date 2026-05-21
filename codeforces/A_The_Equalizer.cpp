#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,k; cin>>n>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    if(sum%2==1 || (n*k+1)%2==1) cout<<"YES"<<endl;
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