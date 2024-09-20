/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n, k;
    cin >> n >> k;

    auto gSum = [&](int l, int r) -> int
    {
        return (r * (r + 1) / 2) - (l * (l - 1) / 2);
    };

    int left = k, right = k + n - 1, ans = LLONG_MAX;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int sum1 = gSum(k, mid), sum2 = (mid + 1, k + n - 1);
        ans = min(ans, abs(sum1 - sum2));

        if (sum1 > sum2)
            right = mid - 1;
        else
            left = mid + 1;
    }

    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}