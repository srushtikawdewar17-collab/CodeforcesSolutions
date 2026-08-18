#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
vector<int>a(n),b(n),c(n);

for(auto &x:a){
  cin>>x;
}

for(auto &x:b){
  cin>>x;
}

for(auto &x:c){
  cin>>x;
}
  
vector<pair<int,int>> final;
vector<pair<int,int>> A,B,C ;
   for(int i=0;i<n;i++){
    A.push_back({a[i],i});
   }
   sort(A.begin(),A.end(),greater<pair<int,int>>());


   for(int i=0;i<n;i++){
    B.push_back({b[i],i});
   }
   sort(B.begin(),B.end(),greater<pair<int,int>>());


   for(int i=0;i<n;i++){
    C.push_back({c[i],i});
   }
   sort(C.begin(),C.end(),greater<pair<int,int>>());

int ans=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
          
            if(A[i].second!=B[j].second && B[j].second!=C[k].second && A[i].second!=C[k].second)
            ans=max(ans,A[i].first+B[j].first+C[k].first);
        }
    }
  }

    
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