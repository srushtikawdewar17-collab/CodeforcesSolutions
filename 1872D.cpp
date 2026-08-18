#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x,y;
    cin>>n>>x>>y;

  long long p=lcm(x,y);
   long nx= (n/x)-(n/(p));
   long long ny= (n/y)-(n/(p));
   

   long long ans=0;
   long long sumx=0;
   long long sumy=0;
   sumx= nx*(2*n+1-nx)/2;
   sumy= ny*(ny+1)/2;
ans=sumx-sumy;

  cout<<ans<<"\n";

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