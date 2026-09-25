#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int i = n - 2;
        while (i >= 0 && a[i] >= a[i + 1]) {
            i--;
        }
        while (i >= 0 && a[i] <= a[i + 1]) {
            i--;
        }

        cout << i + 1 << endl;
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