/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);
    bool ok = true;
    int ans = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] % ans != 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << ans;
    else
        cout << -1;
    return 0;
}