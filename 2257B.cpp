#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
      cin>>a>>b;
     vector<int> bea(a);
     vector<int> ver(b);

     for(auto &x: bea){
        cin>>x;
     }
     for(auto &x: ver){
        cin>>x;
     }

    
 int cntbea=0;
     for(int i=0;i<a-1;i++){
       cntbea=cntbea+bea[i]-bea[i+1]+1;
     }

      
 int cntver=0;
     for(int i=0;i<b-1;i++){
       cntver=cntver+ver[i]-ver[i+1]+1;
     }

     cntbea=cntbea+bea[a-1];
     cntver=cntver+ver[b-1];

     if(cntbea<cntver){
        cout<<2<<endl;
     }
     else cout<<1<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}