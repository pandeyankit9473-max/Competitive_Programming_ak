#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,x,y,z; cin>>n>>x>>y>>z;
    int op1,op2;
    op1= (n+(x+y)-1)/(x+y);
     if(z*x>=n){
        op2=(n+x-1)/x;
     }
     else{
        int rem= n-z*x;
        op2=z+(rem+(x+10*y)-1)/(x+10*y);
     }
   cout<<min(op1,op2)<<endl;
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