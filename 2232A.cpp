#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
      cin>>n;
    vector <int> v(n);
    for(int &x:v){
         cin>>x;
    }
    int maxi = *max_element(v.begin(),v.end());
    
    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
        hash[v[i]]++;
    }
    int totalsum=n;
     int sumleft=0;
     
     int ans=totalsum;
        for(int j = 1; j <= maxi; j++) {

    int sumright = totalsum - sumleft - hash[j];

    if(max(sumleft,sumright)<ans){
            ans= max(sumleft,sumright);
    }

    sumleft += hash[j];

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