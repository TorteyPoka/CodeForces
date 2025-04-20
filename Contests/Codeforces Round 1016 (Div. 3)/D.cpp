#include <bits/stdc++.h>
using namespace std;

#define int long long
#define el '\n'

// Returns the number at position (x, y) in a 2^n x 2^n grid
int getNumber(int n, int x, int y) {
    if (n == 1) {
        // Base case 2x2 grid
        if (x == 1 && y == 1) return 1;
        if (x == 2 && y == 2) return 2;
        if (x == 2 && y == 1) return 3;
        return 4;
    }

    int half = 1LL << (n - 1);       // Half of the grid size
    int blockSize = 1LL << (2 * (n - 1)); // Size of one quadrant

    if (x <= half && y <= half)
        return getNumber(n - 1, x, y);                        // top-left
    if (x > half && y > half)
        return blockSize + getNumber(n - 1, x - half, y - half); // bottom-right
    if (x > half && y <= half)
        return 2 * blockSize + getNumber(n - 1, x - half, y);    // bottom-left
    return 3 * blockSize + getNumber(n - 1, x, y - half);     // top-right
}

// Returns the (x, y) position of number d in a 2^n x 2^n grid
pair<int, int> getPosition(int n, int d) {
    if (n == 1) {
        if (d == 1) return {1, 1};
        if (d == 2) return {2, 2};
        if (d == 3) return {2, 1};
        return {1, 2};
    }

    int half = 1LL << (n - 1);
    int blockSize = 1LL << (2 * (n - 1));

    if (d <= blockSize) {
        return getPosition(n - 1, d); // top-left
    } else if (d <= 2 * blockSize) {
        auto p = getPosition(n - 1, d - blockSize); // bottom-right
        return {p.first + half, p.second + half};
    } else if (d <= 3 * blockSize) {
        auto p = getPosition(n - 1, d - 2 * blockSize); // bottom-left
        return {p.first + half, p.second};
    } else {
        auto p = getPosition(n - 1, d - 3 * blockSize); // top-right
        return {p.first, p.second + half};
    }
}

void solve() {
    int n, q;
    cin >> n >> q;
    while (q--) {
        string s;
        cin >> s;
        if (s == "->") {
            int x, y;
            cin >> x >> y;
            cout << getNumber(n, x, y) << el;
        } else {
            int d;
            cin >> d;
            auto [x, y] = getPosition(n, d);
            cout << x << " " << y << el;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
