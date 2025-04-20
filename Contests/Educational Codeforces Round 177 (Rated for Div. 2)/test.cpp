#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long count_valid_positions(int n, int k, long long x, const vector<int>& a) {
    vector<long long> prefix_sum(n + 1, 0);

    // Compute prefix sums for array a
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }

    // Total sum of one complete cycle of array a
    long long total_sum = prefix_sum[n];
    
    // We will count valid positions
    long long result = 0;

    // For each starting position in array b
    for (int start = 0; start < n; ++start) {
        long long current_sum = 0;
        int end = start;

        // Simulate the subarray and check if sum >= x
        while (end < start + n * k && current_sum < x) {
            current_sum += a[end % n];
            ++end;
        }

        // If we found such an `end`, it means from `start` to `end-1` is valid
        if (current_sum >= x) {
            result += n * k - end + 1;
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << count_valid_positions(n, k, x, a) << endl;
    }

    return 0;
}
