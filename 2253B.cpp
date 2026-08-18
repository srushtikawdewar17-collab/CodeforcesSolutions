#include <bits/stdc++.h>
using namespace std;

int combo( vector<int> &input,int n){
    vector<int>v;
    for(int x: input){
        if(v.empty() || v.back()!=x){
           v.push_back(x);
        }
    }
    return v.size();
}

void solve() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int &x: v){
        cin>>x;
    }
    int check=-1;

    //1122 case
     for(int i=1;i<n-2;i++){
        if(v[i]==v[i-1] && v[i+1]==v[i+2] && v[i]!=v[i+1]){
            swap(v[i],v[i+1]);
            check =1;
            break;
        }
     }


    // a2113b 
     if(check==-1){
     for(int i=2;i<n-2;i++){
        if(v[i]==v[i+1] && v[i]!=v[i-1] &&v[i]!=v[i+2] && v[i-1]!=v[i+2]){
            if(v[i-2]!=v[i]){
            swap(v[i-1],v[i]);
            }
            else{
                swap(v[i+1],v[i+2]);
            }
            check=1;
            break;
        }
     }
    
    }


 // 211 case
     if(check==-1){
     for(int i=0;i<n-2;i++){
        
        if(v[i]!=v[i+1] && v[i+1]==v[i+2] && v[i-1]!=v[i+1]){
            swap(v[i],v[i+1]);
            check=1;
            break;
        }
     }
    }

//112 case
    if(check==-1){
     for(int i=1;i<n-1;i++){
        if(v[i]!=v[i+1] && v[i-1]==v[i] &&v[i+2]!=v[v[i]]){
            swap(v[i],v[i+1]);
            check=1;
            break;
        }
     }
    }

    
    
   
   

   
    int ans = combo(v,n);

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