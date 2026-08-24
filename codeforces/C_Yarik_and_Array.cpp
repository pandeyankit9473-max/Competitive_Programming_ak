#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
//tc-o(n)....sc=o(n).
void solve() {
    int n; cin>>n; vector<int>a(n);
    for(auto &it:a) cin>>it;
    int i=0, j=0, maxi=INT_MIN,sum=0;
    while(j<n){
        if(sum<0){
            sum=0;
            i=j;
        }
        if(i<j){
            if((a[j]^a[j-1])&1) sum+=a[j];
            else { sum=a[j]; i=j; }
        }
        else sum=a[j];
        maxi=max(sum,maxi);
        j++;
    } 
    cout<<maxi<<endl;
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