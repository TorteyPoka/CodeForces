#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int min_val = *min_element(a.begin(), a.end());
    int min_count = count(a.begin(), a.end(), min_val);

    bool possible = true;
    for (int x : a) {
        if (x % min_val != 0) {
            possible = false;
            break;
        }
    }

    if (possible && (min_count > 1 || n > 1)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}