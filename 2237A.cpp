#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int &x:v){
        cin>>x;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[j]>v[i]){
                v[j]=v[i];
                break;
            }
        }
    }
    int sum=0;
    for(int k=0;k<n;k++){
        //cout<<v[k]<<"  ";
        sum=sum+v[k];
    }
    cout<<sum<<"\n";
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