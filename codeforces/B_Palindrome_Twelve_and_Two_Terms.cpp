#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPalindrome(ll x) {
    string s = to_string(x);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

void solve() {
    ll n;
    cin >> n;

    ll a = 0, b = n;

    while (a <= n) {
        if (isPalindrome(a) && b % 12 == 0) {
            cout << a << " " << b << '\n';
            return;
        }

        a++;
        b--;
    }

    cout << -1 << '\n';
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