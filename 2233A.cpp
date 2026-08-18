#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int k1=ceil((double)n/(x+y));
    int k2=ceil((double)(n+10*y*z)/(x+10*y));
    if(k1>=k2 &&k2>0){
   cout<<k2<<endl;
    }
    else{
    cout<<k1<<endl;
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