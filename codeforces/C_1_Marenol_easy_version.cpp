#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    string a; cin>>a;
    string b; cin>>b;
    int odd1=0, odd2=0, even1=0, even2=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1' && i%2==0) even1++;
        else if(a[i]=='1' && i%2!=0)odd1++; 
    }
    for(int i=0;i<n;i++){
        if(b[i]=='1' && i%2==0) even2++;
        else if(b[i]=='1' && i%2!=0)odd2++; 
    }
    if(even1==even2 && odd1==odd2 ){ cout<<"YES"<<endl; }
    
    else cout<<"NO"<<endl;
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