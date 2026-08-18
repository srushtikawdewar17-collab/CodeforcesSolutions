#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    vector<bool> used(n, false);
    long long total_swaps = 0;
    
    for (int v = 0; v < n; ++v) {
        int chosen_index = -1;
        int unpicked_before = 0;
        
        for (int j = 0; j < n; ++j) {
            if (!used[j]) {
                if (a[j] <= b[v]) {
                    chosen_index = j;
                    break;
                }
                unpicked_before++;
            }
        }
        
        if (chosen_index == -1) {
            cout << -1 << "\n";
            return;
        }
        
        used[chosen_index] = true;
        total_swaps += unpicked_before;
    }
    
    cout << total_swaps << "\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}