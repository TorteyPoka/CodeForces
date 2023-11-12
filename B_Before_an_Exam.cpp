/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, n, minTime[30], maxTime[30];
    cin >> d >> n;

    for (int i = 0; i < d; ++i)
        cin >> minTime[i] >> maxTime[i];

    int minTimeSum = accumulate(minTime, minTime + d, 0);
    int maxTimeSum = accumulate(maxTime, maxTime + d, 0);

    if (minTimeSum <= n && n <= maxTimeSum)
    {
        cout << "YES" << endl;
        for (int i = 0; i < d; ++i)
        {
            int t = min(minTime[i] + n - minTimeSum, maxTime[i]);

            cout << t << " ";

            n -= (t - minTime[i]);
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}