#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
        cin >> n;

        vector<long long> h(n);

        for (int i = 0; i < n; i++)
            cin >> h[i];

        vector<long long> ans(n);

        for (int s = 0; s < n; s++) {

            vector<int> pos;

            for (int k = 1; k < n; k++)
                pos.push_back((s + k) % n);

            int m = n - 1;

            vector<long long> pref(m), suff(m);

            pref[0] = h[s];

            for (int i = 1; i < m; i++) {
                pref[i] = max(pref[i - 1], h[pos[i - 1]]);
            }

            suff[m - 1] = h[(s - 1 + n) % n];

            for (int i = m - 2; i >= 0; i--) {
                suff[i] = max(suff[i + 1], h[pos[i]]);
            }

            long long sum = 0;

            for (int i = 0; i < m; i++) {
                sum += min(pref[i], suff[i]);
            }

            ans[s] = sum;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << "\n";
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