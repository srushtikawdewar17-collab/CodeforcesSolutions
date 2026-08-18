#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
for(int &x:v){
    cin>>x;
}
    if(k>1){
        cout<<"YES\n";
    }
    else{
        int flag=0;
    for(int i=0;i<n-1;i++){
        if(v[i+1]<v[i]){
            flag=-1;
        }
  }
  if(flag==-1){
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
  }
  
    
}
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