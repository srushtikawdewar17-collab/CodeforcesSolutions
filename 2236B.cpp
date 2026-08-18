#include <bits/stdc++.h>
using namespace std;
char rev(char a){
 if(a=='0'){
    a='1';
 }
 else{
    a='0';
 }
 return a;
}

void solve() {
    int n,k;
    cin>>n>>k;
    string v;
    cin>>v;

    for(int i=0;i<n;i++){
        if(v[i]!='0'){
            if(k+i>=n){
                break;
            }
            v[k+i]= rev(v[k+i]);
            v[i]='0';
        }
    }
  
int flag=0;
    for(int j=0;j<n;j++){
        if(v[j]=='1'){
            flag=1;
            break;
        }
    }
    if(flag==0){
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