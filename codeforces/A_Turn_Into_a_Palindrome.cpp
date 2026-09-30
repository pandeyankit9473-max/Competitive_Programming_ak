#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    char ch; cin>>ch;
    string str; cin>>str;
    string s=str;
    reverse(s.begin(),s.end());
    if(s==str){ cout<<0<<endl; return ;}
    int l=0, r=n-1;
    int cnt=0;
    while(l<r){
        if(str[l]==str[r]) cnt+=0;
        else {
            if(str[l]==ch || str[r]==ch) cnt+=1;
            else cnt+=2;
        }
        l++; r--;
    }
    cout<<cnt<<endl;
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