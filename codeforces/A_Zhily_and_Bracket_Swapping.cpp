#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    string a,b;
    cin>>a>>b;
    bool isRBS= true; //right bracket sequance
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            if(a[i]=='(') x++,y++;
            else x--,y--;
        }
        else{
            if(x<y) x++, y--;
            else x--,y++;
        }
        if(x<0 || y<0)
        { isRBS=false; break;}
    }
      if(x!=0 || y!=0) isRBS=false;

      if(isRBS) cout<<"YES"<<endl;
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




// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     string a, b;
//     cin >> a >> b;

//     int sum = 0;
//     int diff = 0;
//     bool possible = true;

//     for (int i = 0; i < n; i++) {

//         if (a[i] == '(' && b[i] == '(') {
//             sum += 2;
//         }

//         else if (a[i] == ')' && b[i] == ')') {
//             sum -= 2;
//         }

//         else {
//             diff++;
//         }

//         if (sum < 0) {
//             possible = false;
//         }

//         if (diff % 2 == 1 && sum < 2) {
//             possible = false;
//         }
//     }

//     if (sum != 0) {
//         possible = false;
//     }

//     if (possible)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }
// }