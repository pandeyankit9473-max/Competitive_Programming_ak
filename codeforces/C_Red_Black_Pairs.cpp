//big mistakes not gonna touch questions that has tag like dp...Ufff

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    vector<int> dp(n + 1, 1e9);

    dp[0] = 0;

    for(int i = 0; i < n; i++) {

        // Vertical
        dp[i + 1] = min(dp[i + 1],
                        dp[i] + (a[i] != b[i]));

        // Horizontal
        if(i + 1 < n) {
            int cost = 0;

            cost += (a[i] != a[i + 1]);
            cost += (b[i] != b[i + 1]);

            dp[i + 2] = min(dp[i + 2],
                            dp[i] + cost);
        }
    }

    cout << dp[n] << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}