#include <bits/stdc++.h>

using namespace std;
 
#define ll long long
#define endl '\n'
 
void solve() {
    int n; cin>>n;
    vector<int>a(n);
    ll sum=0;
    for(auto&it:a) {cin>>it; sum+=it;}
    map<int,int>mpp;
    for(int x:a) mpp[x]++;
    int fq=0, mx=0;
    for(auto it:mpp){
        if(it.second>fq){
            fq=it.second;
            mx=it.first;
        }
    }
   
    if(fq>n-fq){
        ll res= fq-(n-fq)-2;
        res=max(res, 0LL);
        res*=mx;
        sum-=res;
    }
    cout<<sum<<endl;
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