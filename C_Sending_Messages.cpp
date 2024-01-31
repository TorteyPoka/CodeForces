/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        ll x, y;

        cin >> x;
        if (((x * a)*1ll) < b)
            f -= (x * a);
        else
            f -= b;
        for (int i = 1; i < n; i++)
        {
            cin >> y;
            ll chargeKill = (y - x) * a;
            if (chargeKill < b)
                f -= chargeKill;
            else
                f -= b;
            x = y;
        }
        if (f > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}