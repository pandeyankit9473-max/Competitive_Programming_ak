#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll x,y; cin>>x>>y;
    ll z;
    for(ll i=2; i<=y/x;i++){
        ll z=x*i;
        if(y%z==0){
           continue;
        }
        else{
             cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// void solve() {
//     ll x, y;
//     cin >> x >> y;

//     if (y / x == 2)
//         cout << "NO\n";
//     else
//         cout << "YES\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }