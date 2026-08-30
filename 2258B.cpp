#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n,m;
    cin>>n>>m;
    
    vector <int> v(n);
    for(int &x: v){
        cin>>x;
    }

    vector<int> freq(m+1,0);

    for(int x:v){
       freq[x]++;
    }

    int maxfreq=*max_element(freq.begin(),freq.end());

    int element = max_element(freq.begin(), freq.end()) - freq.begin();
    
    int ans1=maxfreq;
    if(element%2==0){ ans1=ans1*2;}

    if(maxfreq>(n/2)){
         int a=element/2;

         for(int i=0;i<n;i++){
            if(v[i]==a){
                ans1++;
            }
         }
    }
    
    int ans2=n;
    int minel=*min_element(v.begin(),v.end());

    for(int i=0;i<n;i++){
        if(v[i]==2*minel){
            ans2++;
        }
    }


     int ans=max(ans2,ans1);
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