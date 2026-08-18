#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    if(n==3){
        cout<<"1 1 2 1 2 3 1 3 2 2 3 3"<<endl;
    }
    else if(n==2){
        cout<<"1 2 2 1 2 1 1 2"<<endl;
    }
    else{
    int arr[4][n];
    for(int i=0;i<4;i++){
        int k;
        if(i==0){
          k=0;
        }
        if(i==1){
          k=1;
        }
        if(i==2){
          k=3;
        }
        if(i==3){
          k=2;
        }

   for(int j=1;j<=n;j++){
   if(k>=n){
    k=k-n;
   }
   arr[i][k]=j;
   k++;

   }
}
for(int i=0;i<4;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
}
cout<<endl;
    }
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