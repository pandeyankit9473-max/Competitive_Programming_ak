#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    if (k < n || k > 2 * n - 1) {
            cout << -1 << '\n';
            return;
        }

        vector<vector<int>> a(n, vector<int>(n));

        int d = k - n;
        int c = n - d;

        int val = 1;

        // 1. Common row + column minimums
        for (int i = 0; i < c; i++) {
            a[i][i] = val++;
        }

        // 2. Extra row minimums
        for (int i = c; i < n; i++) {
            a[i][0] = val++;
        }

        // 3. Extra column minimums
        for (int j = c; j < n; j++) {
            a[0][j] = val++;
        }

        // 4. Fill remaining cells
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 0) {
                    a[i][j] = val++;
                }
            }
        }

        // Print
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
    }

    


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}