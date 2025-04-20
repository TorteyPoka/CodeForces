#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string path;
    cin >> path;
    vector<vector<long long>> grid(n, vector<long long>(m));
    vector<vector<bool>> is_path(n, vector<bool>(m, false));

    // Mark path cells
    int i = 0, j = 0;
    is_path[i][j] = true;
    for (char c : path) {
        if (c == 'D') i++;
        else j++;
        is_path[i][j] = true;
    }

    // Read grid and compute non-path sums
    vector<long long> row_sum(n, 0), col_sum(m, 0);
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (!is_path[i][j]) {
                row_sum[i] += grid[i][j];
                col_sum[j] += grid[i][j];
            }
        }
    }

    // Assign values to path cells
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            if (is_path[i][j]) {
                // This cell must cancel both row and column sums
                grid[i][j] = -row_sum[i] - col_sum[j];
                // Update sums to reflect this assignment
                row_sum[i] += grid[i][j];
                col_sum[j] += grid[i][j];
            }
        }
    }

    // Output the restored grid
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cout << grid[i][j] << (j < m-1 ? " " : "\n");
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}