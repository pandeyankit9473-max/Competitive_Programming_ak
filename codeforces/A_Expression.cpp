#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;

    int ans;

    if(a==1 && b==1 && c==1)
        ans = 3;

    else if(a==1 && b==1)
        ans = (a+b)*c;

    else if(a==1)
        ans = max((a+b)*c , a+b+c);

    else if(c==1)
        ans = max(a*(b+c) , a+b+c);

    else if(b==1)
        ans = max((a+b)*c , a*(b+c));

    else
        ans = a*b*c;

    cout << ans;
}

int main() {
    solve();
    return 0;
}