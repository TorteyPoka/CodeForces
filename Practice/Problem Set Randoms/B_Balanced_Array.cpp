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
    if (n % 4 == 0)
    {
        cout << "YES" << endl;

        int sum = 0;
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
            sum += i;
        }
        int sum1 = 0;
        for (int i = 1; i < n - 1; i += 2)
        {
            cout << i << " ";
            sum1+=i;
        }
        cout << sum - sum1 << endl;
    }
    else
        cout << "NO" << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}