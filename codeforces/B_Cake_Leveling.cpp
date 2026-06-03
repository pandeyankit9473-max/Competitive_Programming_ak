#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = 0;
    ll mn = 1e18;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        mn = min(mn, sum / (i + 1));
        cout << mn << " ";
    }

    cout << '\n';
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