#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin>>n;

    vector <int> v(n);
    for(int &x: v){
        cin>>x;
    }

    int flag=0;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            flag=-1;
        }
    }


int cnt=n;

    for(int i=1;i<n-1;i++){
      if(abs(v[i]-v[i-1])+abs(v[i]-v[i+1])==abs(v[i-1]-v[i+1])){
       v[i]=v[i-1];
       cnt--;
      }
    }
    
    if(flag==0){
        cout<<1<<endl;
    }
    
    else{
    cout<<cnt<<endl;
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