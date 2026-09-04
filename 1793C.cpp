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
    int mn=1;
    int mx=n;
    int l=0,r=n-1;
    for(int i=0;i<n-1;i++){
       if(v[l]==mn ){
        l++;
         mn+=1;
       }

       if(v[l]==mx){
        l++;
        mx-=1;
       }

       if(v[r]==mx){
        r--;
        mx-=1;
       }

       if(v[r]==mn){
          r--;
          mn+=1;
       }
    }

    
       if(l>=r || (r-l)<3  ){
        cout<<-1<<"\n";
       }

       else{
        cout<<l+1<<" "<<r+1<<"\n";
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