#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &x:v){
        cin>>x;
    }
    int mindex=0;
    int maxdex=0;
    for(int i=0;i<n;i++){
       if(v[mindex]>v[i]){
        mindex=i;
       }
       if(v[i]>v[maxdex]){
        maxdex=i;
       }
    }
    int result=v[maxdex]+1-v[mindex];
     cout<<result<<endl;
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