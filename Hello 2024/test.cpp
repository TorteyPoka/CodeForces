/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long penalty_s = 0, penalty_t = 0;
        
        int last_s = numeric_limits<int>::max();
        int last_t = numeric_limits<int>::max();

        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= last_s)
            {
                last_s = a[i];
            }
            else if (a[i] <= last_t)
            {
                last_t = a[i];
            }
            else
            {
                if (last_s < last_t)
                {
                    last_s = a[i];
                    penalty_s++;
                }
                else
                {
                    last_t = a[i];
                    penalty_t++;
                }
            }
        }
        cout << penalty_s + penalty_t << endl;
    }

    return 0;
}