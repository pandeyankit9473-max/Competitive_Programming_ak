#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>> n;
    vector<int>a(n);
    int cnt=0;
    string s(n,'C');
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==0){
            if(cnt==0) s[i]='A';
            else s[i]='B';
            cnt++;

        }
       
        
    }
    if(cnt>=2 || cnt==0){ 
        cout<<"YES"<<endl;
         cout<<s<<endl;
        return;
    }
    else {cout<<"NO"<<endl; return;}
  
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