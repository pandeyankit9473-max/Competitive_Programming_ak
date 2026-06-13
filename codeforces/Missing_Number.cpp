#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
   int n; cin>>n;
   vector<int>a(n,0);
   for(int i=1;i<=n;i++){
    int x; cin>>x;
    a[x]=1;
   }
   for(int i=1;i<=n;i++){
    if(a[i]==0){
        cout<<i<<endl; return;
    }
   }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

   
        solve();
    

    return 0;
}