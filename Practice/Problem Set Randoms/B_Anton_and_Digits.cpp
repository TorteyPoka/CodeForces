/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

        int ii,
        iii, v, vi;
    cin >> ii >> iii >> v >> vi;
    int t = min({ii, v, vi});
    int ans = 1LL * 256 * t;
    ii -= t;
    cout << ans + 1LL * 32 * min(ii, iii) << endl;
    return 0;
}