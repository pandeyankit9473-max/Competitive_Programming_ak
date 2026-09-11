#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(auto&it:a) cin>>it;
    int l=0, r=n-1;
    while(l<n){
        if(a[l]!=0){ a[l]=1; break;}
        l++;
    }
    while(r>=0){
        if(a[r]!=0) { a[r]=1; break;}
        r--;
    } 
    for(auto&it:a) if(it==-1) it=0;
    for(auto it:a) cout<<it<<" ";
    cout<<endl;
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