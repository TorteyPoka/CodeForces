/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int k, x, a;
        cin >> k >> x >> a;
        int road = 0;
        bool f = true;
        for (int i = 0; i < x && f; i++)
        {
            int rester = (road + k - 1) / (k - 1);
            if (rester == 0)
                road++;
            else
                road += rester;
            f = road <= a;
        }

        if (k * (a - road) > a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}