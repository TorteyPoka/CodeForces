#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, m, k;
        int p = 0;
        cin >> n >> m >> k;

        long long sumJ = 0;
        int jell[n];
        int gell[m];

        for (int i = 0; i < n; i++)
        {
            cin >> jell[i];
            sumJ += jell[i];
        }

        for (int i = 0; i < m; i++)
            cin >> gell[i];

        sort(jell, jell + n);
        sort(gell, gell + m, greater<int>());

        for (long long i = 1; i <= k; i++)
        {
            if (i % 2 == 1)
            {
                if (gell[p] > jell[p])
                {
                    sumJ -= jell[p];
                    swap(jell[p], gell[p]);
                    sumJ += jell[p];
                }
            }
            else
            {
                if (jell[p] > gell[p])
                    swap(gell[p], jell[p]);
            }
            p++;
        }
        cout << sumJ << endl;
    }

    return 0;
}