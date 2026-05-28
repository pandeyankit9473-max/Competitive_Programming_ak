#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    vector<int>opn;
    for(auto&x:a) cin>>x;
    int flip=0;
    for(int i=n-1;i>=0;i--){
       int curr=a[i];
       if(flip) curr=-curr;
       if(curr>0){
         opn.push_back(i+1);

         // flip state change
        flip ^= 1;
       }
    }
    cout<<opn.size()<<endl;
     for(auto x : opn) {
        cout << x << " ";
    }
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