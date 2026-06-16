#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,m; cin>>n>>m;
    ll sum=0;
    vector<int>odd,even;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        sum+=x;
        if(i&1) odd.push_back(x);
        else even.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    bool podd = false;
    bool peven = false;

    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;

        if (x & 1) { // odd parity query

            if (!odd.empty() &&
                !(odd.back() < 0 && podd)) {

                sum -= odd.back();
                odd.pop_back();
                podd = true;
            }

        } else { // even parity query

            if (!even.empty() &&
                !(even.back() < 0 && peven)) {

                sum -= even.back();
                even.pop_back();
                peven = true;
            }
        }
    }

    cout << sum << '\n';
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