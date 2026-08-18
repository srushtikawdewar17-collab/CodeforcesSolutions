#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
 vector<int> a(n);
for(int &x:a){
    cin>>x;
}

vector<int> b(n);
for(int &x:b){
    cin>>x;
}

map<int,int> mpa,mpb;

int cnt=1;
for(int i=0;i<n;i++){
    if(i>0 && a[i]==a[i-1]){
        cnt++;
    }
    else{
        cnt=1;
    }
    mpa[a[i]]=max(mpa[a[i]],cnt);
}


cnt=1;
for(int i=0;i<n;i++){
    if(i>0 && b[i]==b[i-1]){
        cnt++;
    }
    else{
        cnt=1;
    }
    mpb[b[i]]=max(mpb[b[i]],cnt);
}

int ans=0;
for(auto p : mpa){
  ans=max(ans,p.second+mpb[p.first]);
}


for(auto p : mpb){
  ans=max(ans,p.second+mpa[p.first]);
}

cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}