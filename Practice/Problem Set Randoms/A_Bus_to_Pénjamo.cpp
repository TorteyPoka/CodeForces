#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define test  \
    int T;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

void crack()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int &i : ar)
        cin >> i;
    // sort(ar, ar + n, greater<int>());
    int ans = 0;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 1)
        {
            if (ar[i] % 2)
            {
                ones++;
            }
            ans += ar[i] / 2;
        }
        else
            ones++;
    }
    // cerr << ones << " ans:" << ans << endl;
    k -= ans;
    if (k)
    {
        if (ones)
        {
            if (ones > k)
                while (k)
                {
                    if (k == ones)
                    {
                        break;
                    }
                    k--;
                    ones -= 2;
                }
        }
    }
    cout << (ans * 2) + ones << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        crack();
    }
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}