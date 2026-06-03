#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 998244353;

ll mod_pow(ll a, ll b, ll mod) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (__int128)res * a % mod;
        a = (__int128)a * a % mod;
        b >>= 1;
    }
    return res;
}

ll ext_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll g = ext_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}

ll mod_inv(ll a, ll mod) {
    ll x, y;
    ext_gcd(a, mod, x, y);
    x %= mod;
    if (x < 0) x += mod;
    return x;
}

vector<pair<ll,int>> factorize(ll n) {
    vector<pair<ll,int>> f;

    for (ll p = 2; p * p <= n; p++) {
        if (n % p) continue;

        int cnt = 0;
        while (n % p == 0) {
            n /= p;
            cnt++;
        }

        f.push_back({p, cnt});
    }

    if (n > 1) f.push_back({n, 1});

    return f;
}

void gen_divs(int idx,
              ll cur,
              ll phi,
              const vector<pair<ll,int>>& fac,
              vector<pair<ll,ll>>& res) {

    if (idx == (int)fac.size()) {
        res.push_back({cur, phi});
        return;
    }

    auto [p, e] = fac[idx];

    ll val = 1;

    gen_divs(idx + 1, cur, phi, fac, res);

    for (int k = 1; k <= e; k++) {
        val *= p;

        ll ph;
        if (k == 1)
            ph = phi * (p - 1);
        else
            ph = phi * (val / p) * (p - 1);

        gen_divs(idx + 1, cur * val, ph, fac, res);
    }
}

ll count_residue(ll N, ll r, ll mod) {
    if (mod == 1) return N;

    if (r == 0) {
        return N / mod;
    }

    if (r > N) return 0;

    return 1 + (N - r) / mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {

        ll N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        ll K = A * D - B * C;

        if (K == 0) {

            ll g = gcd(A, C);

            ll a = A / g;
            ll c = C / g;

            ll t = B / c;

            __int128 ans =
                (__int128)g * N * (N + 1) / 2
                + (__int128)t * N;

            cout << (ll)(ans % MOD) << '\n';
            continue;
        }

        K = llabs(K);

        auto fac = factorize(K);

        vector<pair<ll,ll>> divisors;
        gen_divs(0, 1, 1, fac, divisors);

        ll ans = 0;

        for (auto &[d, phi] : divisors) {

            ll g = gcd(A, d);

            if (B % g) continue;

            ll A2 = A / g;
            ll B2 = B / g;
            ll mod = d / g;

            ll cnt;

            if (mod == 1) {
                cnt = N;
            } else {

                ll inv = mod_inv(A2 % mod, mod);

                ll r = ((-B2) % mod + mod) % mod;
                r = (__int128)r * inv % mod;

                cnt = count_residue(N, r, mod);
            }

            ans = (ans + (__int128)(phi % MOD) * (cnt % MOD)) % MOD;
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}