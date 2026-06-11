#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
   ll n,x,s;
   cin>>n>>x>>s;
   string str; cin>>str;
   ll tab=x;
   ll empty=0;
   ll ambi=0;
   ll ans=0;
   for(char c: str){
    if(c=='I'){
      if(tab>0){
          tab--;
        empty += s-1;
        ans++;
      }
    }
     else if(c=='A'){
        if(empty>0){
            empty--;
            ambi++;
            ans++;
        }
        else if(tab>0){
            tab--;
            empty += s-1;
            
            ans++;
        }
     }
     else{
        if(empty>0){
            empty--;
           
            ans++;
        }
        else if(ambi>0 && tab>0){
            ambi--;
            tab--;
            empty += s-1;
            ans++;
            
        }
     }
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