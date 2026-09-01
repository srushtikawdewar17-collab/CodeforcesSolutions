#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v){
        cin>>x;
    }
      ll i=2;
    while(1){
        set<ll> s;

        for(int j=0;j<n;j++){
            s.insert(v[j]%i);
        }
        if(s.size()==2){
            cout<<i<<"\n";
            break;
        }
        
        else{
            i*=2;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("input.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}