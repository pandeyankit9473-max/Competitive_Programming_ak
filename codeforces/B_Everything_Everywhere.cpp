#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i]%abs(a[i]-a[i+1])==0) ans++;
    }
    cout<<ans<<endl;
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
// since the diff b/w the max and the min is 1 and all the elements of the array will be multiples of gcd
//menas max - min = gcd ⇒ gcd factor out karo, milta hai M - m = 1.
//Isliye good array me sirf do possible values ho sakti hain: mg aur (m+1)g.
// everythings is diff in permutations so only 2 len of subarray valids..