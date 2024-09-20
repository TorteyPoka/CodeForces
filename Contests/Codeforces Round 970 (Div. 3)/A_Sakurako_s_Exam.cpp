/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

        int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        bool ans = false;
        if (a == 0)
        {
            if (b % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
            continue;
        }
        if (b == 0)
        {
            if (a % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
            continue;
        }
        int x = a + (2 * b);
        if (x % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}