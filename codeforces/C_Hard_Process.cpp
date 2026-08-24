#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(auto &it:a) cin>>it;
    int zeros=0, maxi=0, left=0,right;
    int bestLeft=0, bestRight=-1;
    for(right=0;right<n;right++){
       if(a[right]==0) zeros++;
       while(zeros>k){ if(a[left]==0) zeros--; left++;}
      if(right-left+1>maxi){
        maxi=right-left+1; bestLeft=left; bestRight=right;
      }
    }
  for(int i=bestLeft; i<=bestRight;i++) if(a[i]==0) a[i]=1;
    cout<<maxi<<endl;
    for(int x:a) cout<<x<<" "; cout<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

   

    
        solve();
    

    return 0;
}