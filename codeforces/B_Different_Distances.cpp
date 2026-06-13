#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
     int n; cin>>n;
	    cout<<n<<" ";
	    for(int i = 1; i<=n; i++) cout<<i<<" "<<i<<" ";
	    for(int i = 1; i<=n; i++) cout<<i<<" ";
	    for(int i = 1; i<n; i++) cout<<i<<" ";
	    cout<<endl;
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