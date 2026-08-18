#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n=s.size();
  int cnt1=0,cnt0=0;
  
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt0++;
        }
        if(s[i]=='1'){
            cnt1++;
        }
    }
  int sizeoft=0;
   for(int i=0;i<n;i++){

         if(cnt1!=0 && s[i]=='0'){
            cnt1--;
            sizeoft++;
         }
        

         else if(cnt0!=0 && s[i]=='1'){
            cnt0--;
            sizeoft++; 
        }
    
     else{
        break;
     }
     
   }
   int ans= n-sizeoft;
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