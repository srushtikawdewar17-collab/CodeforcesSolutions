#include <bits/stdc++.h>
using namespace std;

// int dp(string a,int x,int n){
//    if(x==n){ return 0;
//    }
//     set<char> b;
//    for(int i=x;i<n;i++){
//      b.insert(a[i]);
//    }
//    return b.size();

// }

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
 int ans=0;
 int freq[26];
 fill(freq,freq+26,0);
 int distinctleft[n];
 int dist=0;
      for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
           if(freq[s[i]-'a']==1){
               dist++;
           }
           distinctleft[i]=dist;
          }
      



 fill(freq,freq+26,0);
          int distinctright[n];
 dist=0;
      for(int i=n-1;i>=0;i--){
        freq[s[i]-'a']++;
           if(freq[s[i]-'a']==1){
               dist++;
           }
           distinctright[i]=dist;
          }
      



          for(int i=0;i<n-1;i++){
            ans=max(ans,distinctleft[i]+distinctright[i+1]);
          }
 


      cout<<ans<<endl;
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