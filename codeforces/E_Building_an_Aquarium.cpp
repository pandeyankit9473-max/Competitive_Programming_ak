#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool check(ll mid ,vector<int>&a, ll x){
        ll units=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<mid) units+=(mid-a[i]);
        }
        return units<=x;
    }


void solve() {
    int n,x; cin>>n>>x;
    vector<int>a(n);
    for(auto &it: a) cin>>it;
    ll l=1, h=1e12;
    ll ans=0;
    
    while(l<=h){
        ll mid= l+(h-l)/2;
        if(check(mid,a,x)){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;

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