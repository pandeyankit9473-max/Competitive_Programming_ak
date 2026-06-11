#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> mask(n, 0);

    // Har position ke possible letters ka bitmask banao
    for (int i = 0; i < k; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < n; j++) {
            mask[j] |= (1 << (s[j] - 'a'));
        }
    }

    vector<int> divisors;

    // n ke saare divisors nikalo
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i * i != n)
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    // Sabse chhota period try karo
    for (int period : divisors) {

        string pattern = "";
        bool possible = true;

        for (int start = 0; start < period; start++) {

            int common = (1 << 26) - 1;

            // Same remainder modulo period wali positions
            for (int pos = start; pos < n; pos += period) {
                common &= mask[pos];
            }

            if (common == 0) {
                possible = false;
                break;
            }

            pattern += char('a' + __builtin_ctz(common));
        }

        if (possible) {

            for (int i = 0; i < n / period; i++) {
                cout << pattern;
            }

            cout << '\n';
            return;
        }
    }
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