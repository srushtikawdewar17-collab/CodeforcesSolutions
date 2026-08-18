#include <bits/stdc++.h>
using namespace std;
int combo( string input,int n){
    string v;
    for(int x: input){
        if(v.empty() || v.back()!=x){
           v.push_back(x);
        }
    }
    return v.size();
}

void solve() {
    string s;
    int size;
    cin>>size;
    cin>>s;
int ans;
int index = -1;

// First priority: aba
for(int i=1;i<size-1;i++){
    if(s[i-1]==s[i+1] && s[i]!=s[i-1]){
        index = i;
        break;
    }
}

// Second priority: abc
if(index==-1){
    for(int i=1;i<size-1;i++){
        if(s[i]!=s[i-1] && s[i]!=s[i+1]){
            index = i;
            break;
        }
    }
}
if(index!=-1){
for(int i=index;i<size-1;i++){
    s[i]=s[i+1];
}
s.pop_back();
ans = combo(s,size);
}

else{
    ans= combo(s,size);
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