#include <bits/stdc++.h>
using namespace std;

void solve() {
int n;
cin>>n;
vector<int> v(n);
for(int &x:v){
    cin>>x;
}
sort(v.begin(),v.end(),greater<int>());
if(n==2){
    cout<<v[0]<<" "<<v[1]<<endl;
}
else{
int flag=1;
for(int i=0;i<n-2;i++){
  if(v[i]%v[i+1]!=v[i+2]){
    flag=-1;
    break;
  }}
  if(flag==1){
    cout<<v[0]<<" "<<v[1]<<endl;
  }
  else if(flag==-1){
    cout<<-1<<endl;
  }

}
return;
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