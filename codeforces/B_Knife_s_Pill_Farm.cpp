#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    multiset<long long> s; // sorted set, smallest (m-1) elements rakhega
    long long sum = 0;
    long long ans = LLONG_MIN;

    for (int i = 1; i <= n; i++) {
        if ((int)s.size() == m - 1) {
            long long candidate = (long long)m * a[i] - sum;
            ans = max(ans, candidate);
        }
        s.insert(a[i]);
        sum += a[i];
        if ((int)s.size() > m - 1) {
            auto it = prev(s.end()); // sabse bada element
            sum -= *it;
            s.erase(it);
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}