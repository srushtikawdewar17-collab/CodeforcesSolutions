#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int m=n*(n-1)/2;
    map<int,int> mp;
    for(int i=0;i<m;i++){  
        int x;
        cin>>x;
        mp[x]++;
    }
vector<int> ans;
int k = n - 1;

for (auto x : mp) {
    while (x.second >= k && k > 0) {
        ans.push_back(x.first);
        x.second -= k;
        k--;
    }
}

ans.push_back(1000000000);

   for(auto y:ans){
    cout<<y<<" ";
   }
   cout<<endl;
    
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