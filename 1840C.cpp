#include <bits/stdc++.h>
using namespace std;

// long long nCr(int n,int r){
//    if(r<=n){
//     long long prod1=1;
//   for(int i=n;i>=n-r+1;i--){
//       prod1=prod1*i;
//   }
//   long long prod2=1;
//   for(int i=1;i<=r;i++){
//      prod2=prod2*i;
//   }
//   return (prod1/prod2);
// }

// else{
//     return 0;
// }
// }

// int waysfor1(int days,int k,int consecutive){
//     if(k<=consecutive){
//    return consecutive-(k-1);
//     }

//     else{
//         return 0;
//     }
// }


int waysfork(int k,int consecutive){
    long long ways=0;
    int y=k;
    if(consecutive>0){
    while(y<=consecutive){
        ways=ways+consecutive-(y-1);
        y++;
    }
}
  
    return ways;
}

void solve() {
    int n,k,q;
    cin>>n>>k>>q;
 
    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
    }

    vector<int> temp(n,0);
    for(int i=0;i<n;i++){
        if(a[i]<=q){
            temp[i]=1;
        }
    }

    long long sum=0;
    int consecutive=0;
    for(int i=0;i<n;i++){
        if(temp[i]==1 && consecutive==0){
            consecutive++;
        }

        if(i>0 && temp[i]==1 && temp[i-1]==1){
            consecutive++;
        }
      if(i==n-1 || temp[i]==0){
         sum=sum + waysfork(k,consecutive);

         consecutive=0;
      }
    }
    cout<<sum<<endl;
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