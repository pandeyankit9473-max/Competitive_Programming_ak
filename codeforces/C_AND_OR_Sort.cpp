#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
ll n;
cin>>n;
string s;
cin>>s;
int count0=0;
int count1=0;
int k=0;

for(int i=0;i<n;i++){
    if(s[i]=='1'&&s[i+1]=='0'){
        k++;
    }
    while(i<n && s[i]=='0'){
        i++;
    }
}
cout<<k<<endl;
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