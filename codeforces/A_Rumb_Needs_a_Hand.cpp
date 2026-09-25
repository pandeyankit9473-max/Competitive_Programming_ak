#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> arr;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];

        if(a[i] != i)
            arr.push_back(a[i]);
    }



    for(int i = 1; i <= n; i++) {
        if(a[i] != i) {
            a[i] = arr.back();
            arr.pop_back();
        }
    }

    for(int i = 1; i < n; i++) {
        if(a[i] > a[i + 1]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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