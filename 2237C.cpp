#include <bits/stdc++.h>
using namespace std;
int ifSorted(vector <long long> v, long long n){

    for(int i=0;i<n-1;i++){
        if(v[i+1]<v[i]){
            return 0;
        }
    }
    return 1;
}

void solve() {
    long long n;
    cin>>n;
    vector <long long> v(n);
    for(long long &x:v){
        cin>>x;
    }
  
    for(long long i=0;i<n-1;i++){
    
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
            v[i+1]=v[i]+v[i+1];
        }
        }
    
    long long ans=v[n-1];
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



#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (auto &x : v) cin >> x;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            long long sum = v[i] + v[i + 1];
            v[i] = v[i + 1];   
            v[i + 1] = sum;    
        }
    }

    cout << v[n - 1] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}