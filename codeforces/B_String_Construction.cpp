#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve(){
    ll n,k;
    cin>>n>>k;

    if(k==n-1){
        cout<<-1<<'\n';
        return;
    }

    int cnt0=(n+1)/2;
    int cnt1=n/2;
    k=n-k;

    for(int i=1;i<=k;i++){
        if(i&1){
            if(i+2>k){
                while(cnt0--) cout<<0;
            }
            else{
                cout<<0;
                cnt0--;
            }
        }
        else{
            if(i+2>k){
                while(cnt1--) cout<<1;
            }
            else{
                cout<<1;
                cnt1--;
            }
        }
    }

    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) solve();
}