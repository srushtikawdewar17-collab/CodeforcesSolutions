#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int&x:v){
        cin>>x;
    }
int a=0,b=0,c=0,flag=0;

    for(int i=0;i<n;i++){
         if(v[i]==1){
            a++;
         }
         else if(v[i]==2){
            b++;
         }
         else{
            c++;
         }
         
         if(a>=b+c){
             int a1=0,b1=0,c1=0;
            for(int j=i+1;j<n;j++){
               
                 if(v[j]==1){
            a1++;
         }
         else if(v[j]==2){
            b1++;
         }
         else{
            c1++;
         }
         if(a1+b1>=c1){
          if(j<n-1){
            flag =1;
            break;
          }
         }
        
        }


         }
         if(flag==1){
            break;
         }
    }
    if(flag==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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