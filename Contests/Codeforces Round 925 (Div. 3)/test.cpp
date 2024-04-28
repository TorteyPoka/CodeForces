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
        int n, x, y;
        cin >> n >> x >> y;

        int l = 0, k = 1;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar, ar + n);
        for(auto i : ar)
            cout << i << " ";
            cout << endl;

        int start = 0, end = n - 1;
        while (start < end)
        {
            int xX = ar[start] + ar[end], yY = ar[start] - ar[end];
            int XX = ar[start] + ar[start + 1], YY = ar[start] - ar[start];
            if (xX % x == 0 && yY % y == 0 && !l)
            {
                l = start;
            }
            if (XX % x == 0 && YY % y == 0 && !k)
            {
                k = start + 1;
            }
            if (l > 0 && k > 0)
                break;
            start++;
        }
        int cnt = 0;
        for (int i = l; i < n; i++)
        {
            for (int j = k; k < n; k++)
            {
                int xX = ar[i] + ar[k], yY = ar[i] - ar[k];
                if (xX % x == 0 && yY % y == 0)
                {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
        // when i > 0 : abs(ar[i-1] - ar[i]) < y || x > ar[i-1] + ar[i];
    }
    return 0;
}