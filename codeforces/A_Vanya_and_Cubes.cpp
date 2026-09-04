#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(10004,0);
    for(int i=0;i<=25;i++){
        a[i] = i+1;
    }
    if(n==1){
        cout<<1;
        return;
    }
    int sum2 = 1;
    int sum = 0;
    int ans = 0;
    for(int i=0;i<10001;i++){
        sum += (a[i]+a[i+1]);
        sum2 += sum;
        if(sum <= n){
            ans++;
        }
    }
    cout<<ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

  solve();
    

    return 0;
}