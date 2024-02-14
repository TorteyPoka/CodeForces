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

        int track = 1;
        for(int i = 0; track<n;)
        {
            int xll = ar[i] + ar[track], xrr = abs(ar[i] - ar[track]);
            // cout << xll << " " << xrr << endl;
            if(xll > x && xrr > y)
            {
                break;
            }
            track++;
        }

        int start = 0, cnt = 0;

        while(start < track)
        {
            int pivot = track;
            while(pivot <= n-1)
            {
                int xll = ar[start] + ar[pivot], xrr = abs(ar[start] - ar[pivot]);
                if(xll % x == 0 && xrr % y == 0)
                {
                    cnt++;
                }
                pivot++;
            }            
            start++;
        }

        cout << cnt << endl;
    }
    return 0;
}