#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,p; cin>>n>>p;
    vector<ll>a(n),b(n);
    vector<pair<ll,ll>>v(n);
    for(auto &x:a) cin>>x;
    for(auto &y:b) cin>>y;

    for(int i=0;i<n;i++) v[i]={b[i],a[i]};
     sort(v.begin(),v.end());

     ll min_cost=p;
    ll alr_shared=1;

    for(auto it:v){
        ll cost=it.first;
        ll share=it.second;
        if(cost>=p) break;
        if(alr_shared+share >= n){
            min_cost += (n-alr_shared)*cost;
            alr_shared=n;
            break;
        }
        else{
            min_cost += share*cost;
            alr_shared += share;
        }
    }
    min_cost += (n-alr_shared)*p;
    cout<<min_cost<<endl;
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