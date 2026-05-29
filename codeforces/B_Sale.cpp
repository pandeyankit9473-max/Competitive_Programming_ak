#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++){
        if(a[i]<0) sum+= a[i];
    }
    cout<<-sum<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

   

    
        solve();
    

    return 0;
}