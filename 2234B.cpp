#include <bits/stdc++.h>
using namespace std;

int isPalindrome(long long a){
    string s;
   s= to_string(a);
    string rev;
    rev=s;
    reverse(rev.begin(),rev.end());
    if(rev==s){
        return 1;
    }
    else{
        return 0;
    }
}

void solve() {
    long long n;
    cin>>n;
    int flag=-1;
   for(long long i=0;i<=n;i++){
       if(isPalindrome(i)){
        if((n-i)%12==0){
            long long a=i;
            long long b=n-a;
            flag=0;
            cout<<a<<" "<<b<<endl;
            break;
        }
       }
   }
   if(flag==-1){
    cout<<flag<<endl;
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