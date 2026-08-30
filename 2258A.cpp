#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    
    vector <int> v(n);
    for(int &x: v){
        cin>>x;
    }

    int ans=gcd(v[0],v[n-1]);
    cout<<ans<<endl;
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