#include <bits/stdc++.h>
using namespace std;

void solve() {
    int arrays;
    cin >> arrays;

    int min1 = INT_MAX, min2 = INT_MAX;

    vector<vector<int>> v(arrays, vector<int>(2));

    for (int j = 0; j < arrays; j++) {

    int size;
    cin >> size;
        min1 = INT_MAX;
        min2 = INT_MAX;

        for (int i = 0; i < size; i++) {
            int n;
            cin >> n;

            if (n < min1) {
                min2 = min1;
                min1 = n;
            }
            else if (n < min2) {
                min2 = n;
            }
        }

        v[j][0] = min1;
        v[j][1] = min2;
    }

    int minimum = INT_MAX;

    for (int i = 0; i < arrays; i++) {
        minimum = min(minimum, v[i][0]);
    }

    int arr[arrays];


    for (int i = 0; i < arrays; i++) {
        arr[i] = v[i][1];
    }

    sort(arr, arr + arrays);

    long long sum = minimum;

    for (int i = arrays - 1; i >= 1; i--) {
        sum += arr[i];
    }

    cout << sum << endl;
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