#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int &x:v){
        cin>>x;
    }


for(int i=0;i<n;i++){
    if(v[i]%k==0){
        cout<<0<<endl;
        return;
    }
}

int temp=INT_MAX;
    for(int i=0;i<n;i++){
        int cnt=0;
        int a=v[i];
        while(a%k!=0){
            cnt++;
            a++;
        }
        temp=min(temp,cnt);
    }
vector<int> arr(n,0);
    if(k==4){ 
        for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
  
   sort(arr.begin(),arr.end());
   cout<<min(temp,arr[0]+arr[1])<<endl;
   return;

}

cout<<temp<<endl;
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