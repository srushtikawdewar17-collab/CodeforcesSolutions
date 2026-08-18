#include <bits/stdc++.h>
using namespace std;

long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r;

    int ans = 1;
    for (int i = 1; i <= r; i++) {
        ans = ans * (n - r + i) / i;
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
int cnt0=0,cnt1=0;

for(int i=0;i<n;i++){
    if(s[i]=='0'){
        cnt0++;
    }
    else{
        cnt1++;
    }
}

int seg0=0;
for(int i=0;i<n-1;i++){
    if(s[i]=='0' && s[i+1]!=s[i]){
        seg0++;
    }
}
if(s[n-1]=='0'){
        seg0++;
    }


int seg1=0;
for(int i=0;i<n-1;i++){
    if(s[i]=='1' && s[i+1]!=s[i]){
        seg1++;
    }
}

 if(s[n-1]=='1'){
        seg1++;
 }
        long long ans = 1;

if(cnt0 > 0)
    ans = ans * nCr(cnt0 - 1, seg0 - 1) % 998244353;

if(cnt1 > 0)
    ans = ans * nCr(cnt1 - 1, seg1 - 1) % 998244353;

cout << ans << endl;

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