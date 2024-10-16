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
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int maxiDist = 1;
    int sup = 1;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > ar[i - 1])
        {
            sup++;
            if (i < n - 1)
                continue;
        }
        maxiDist = max(maxiDist, sup);
        sup = 1;
    }
    cout << maxiDist << endl;

    return 0;
}