#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; cin>>s;
    vector<int>a(s.size());
    int sum=0;
    for(int i=0;i<s.size();i++){
        int d=s[i]-'0';
        sum+=d;
        if(i==0) a[i]=d-1;
        else a[i]=d;
    }
    if(sum<=9){ cout<<"0"<<endl; return ;}
    sort(a.rbegin(),a.rend());
    int ans=0,red=0;
    for(int i=0;i<s.size();i++){
        red+=a[i];
        ans++;
        if(sum-red<=9){ cout<<ans<<endl; return;}
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