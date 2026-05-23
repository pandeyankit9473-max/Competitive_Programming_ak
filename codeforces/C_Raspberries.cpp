#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=INT_MAX;
    int even_cnt=0;
    for(int i=0;i<n;i++){// easy for checking prime like 2,3,5
        if(a[i]%k==0) ans=0;
        ans=min(ans,k-a[i]%k);
        if(a[i]%2==0) even_cnt++;
    }
    if(k==4){
        if(even_cnt>=2) ans=min(ans,0);
        else if(even_cnt==1) ans=min(ans,1);
        else ans=min(ans,2);
    }
    cout<<ans<<endl;
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
// handling the case for prime is easy as min of k-a[i]%k for each element 
// but for non prime like 4 just think diffrently as above 