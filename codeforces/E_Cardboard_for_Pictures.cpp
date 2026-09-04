#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
   ll n, c; cin>>n>>c;
   vector<ll>a(n); 
   for(auto&it:a) cin>>it;
   ll l=1, h=1e9, ans=-1;
   while(l<=h){
     ll mid= l+(h-l)/2;
     ll sumAll=0;
     for(int i=0;i<n;i++){
        sumAll+=(a[i]+2*mid)*(a[i]+2*mid);
        if(sumAll>c) break;
     }
     if(sumAll <=c){
        ans=mid;
        l=mid+1;
     }
     else h=mid-1;
   }
   cout<<ans<<endl;
   // tc:- n*(log 1e9)...
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