#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n+1);
    for( int i=1;i<=n;i++) cin>>a[i];
    ll extra=0;
    for(int i=1;i<=n;i++){
      if(a[i]!=i){
        if(a[i]>i){
            extra += a[i]-i;
        }
        else{
            int need = i-a[i];
            if(extra>=need){
                extra -= need;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
      }
      
    }
     cout<<"YES"<<endl;
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