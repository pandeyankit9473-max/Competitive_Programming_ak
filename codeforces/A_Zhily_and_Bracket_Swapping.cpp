#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int sum = 0;
    int diff = 0;
    bool possible = true;

    for (int i = 0; i < n; i++) {

        if (a[i] == '(' && b[i] == '(') {
            sum += 2;
        }

        else if (a[i] == ')' && b[i] == ')') {
            sum -= 2;
        }

        else {
            diff++;
        }

        if (sum < 0) {
            possible = false;
        }

        if (diff % 2 == 1 && sum < 2) {
            possible = false;
        }
    }

    if (sum != 0) {
        possible = false;
    }

    if (possible)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}