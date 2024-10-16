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
    int n;
    cin >> n;
    int ar[n], br[n];
    int mnA = INT32_MAX, mnB = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mnA = min(mnA, ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> br[i];
        mnB = min(mnB, br[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > mnA && br[i] > mnB)
        {
            int temp = min(abs(mnA - ar[i]), abs(mnB - br[i]));
            ans += temp;
            ar[i] -= temp;
            br[i] -= temp;
        }
        if (ar[i] == mnA && br[i] > mnB)
        {
            ans += abs(mnB - br[i]);
        }
        if (br[i] == mnB && ar[i] > mnA)
        {
            ans += abs(mnA - ar[i]);
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}