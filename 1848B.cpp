#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }
    vector<int> arr(k+1,0);
    vector<int> arr2(k+1,0);
    vector<int> ind(k+1,0);
    int gap;
    for(int i=0;i<n;i++){
        gap=i-ind[v[i]];
        if(gap > arr[v[i]]){
       arr2[v[i]] = arr[v[i]];
       arr[v[i]] = gap;
    }
    else if(gap > arr2[v[i]]){
    arr2[v[i]] = gap;
}
        
         ind[v[i]]=i+1;
    }

    for(int i=1;i<k+1;i++){
        gap=n-ind[i];
       
   if(gap > arr[i]){
    arr2[i] = arr[i];
    arr[i] = gap;
}
else if(gap > arr2[i]){
    arr2[i] = gap;
}
    }

  

    int ans=INT_MAX;

    for(int i=1;i<k+1;i++){
        ans = min(ans, max(arr[i]/2, arr2[i]));
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