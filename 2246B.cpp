#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<" ";
    }
    else if(n==2){
        cout<<-1<<" ";
    }
    else{
    cout<<1<<" "<<2<<" "<<3<<" ";
    if(n>3){
        int x=1;
       for(int i=0;i<n-3;i++){
        cout<<6*x<<" ";
        x=x*2;
       }
    }
}
    cout<<"\n";
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