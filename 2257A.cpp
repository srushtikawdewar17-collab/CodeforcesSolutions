#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    set<char> firstlet;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        firstlet.insert(s[0]);
    }


    set<char> ab;
     for(int i=0;i<m;i++){
         string s;
         cin>>s;
        int size=s.size();
        for(int j=0;j<size;j++){
           ab.insert(s[j]);
        }
    } 

    for(char x: firstlet){
            ab.erase(toupper(x));
    }

  if(ab.empty()){
    cout<<"YES"<<endl;
  }
else{
cout<<"NO"<<endl;
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