#include<bits/stdc++.h>
using namespace std;
#define ll long long;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> bit_count(32, 0);
    ll total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
        for (int b = 0; b < 32; ++b)
            if (a[i] & (1 << b)) bit_count[b]++;
    }

    ll max_xor_sum = 0;
    for (int i = 0; i < n; ++i) {
        ll and_sum = 0;
        for (int b = 0; b < 32; ++b)
            if (a[i] & (1 << b))
                and_sum += 1LL * bit_count[b] * (1 << b);
        ll score = 1LL * n * a[i] + total_sum - 2 * and_sum;
        if (score > max_xor_sum) max_xor_sum = score;
    }

    cout << max_xor_sum << '\n';
    }
    return 0;
}
