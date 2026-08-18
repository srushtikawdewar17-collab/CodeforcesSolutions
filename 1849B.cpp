#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n;
      cin>>n;
      int k;
      cin>>k;

    vector <int> v(n);
    for(int &x:v){
         cin>>x;
    }
int cnt=n;

for(int i=0;i<n;i++){
    if(v[i]%k<=0){ 
        cnt--;
        cout<<i+1<<" " ;}
}
vector<pair<int,int>> s;
for(int i=0;i<n;i++){
       s.push_back({v[i],i+1});
    }

    sort(s.begin(),s.end(),[&](pair<int,int>a,pair<int,int>b){
        if(a.first%k!=b.first%k)
            return a.first%k>b.first%k;
            return a.second<b.second;
        
    });

    for(int i=0;i<=cnt-1;i++){
        cout<<s[i].second<<" ";
    }
 cout<<endl;
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