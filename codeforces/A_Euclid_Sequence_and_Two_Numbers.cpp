#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int k; cin>>k;
    vector<int>a(k);
    for(int i=0;i<k;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int found=1;
    for(int i=0;i+2<k;i++){
        if(a[i+2]!=a[i]%a[i+1]){ found=0; break;}
    } 
    if(found) cout<<a[0]<<" "<<a[1]<<endl;
    else cout<<"-1"<<endl;
    
   
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