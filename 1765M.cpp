#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;

 int i=2;
    while(n%i!=0 && i<= sqrt(n)){
        i++;
    }

    if(n%i!=0){
        i=n;
    }
int a=n/i;
    cout<<a<<" "<<n-a<< endl;

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