/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, p;
        cin >> n >> p;

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i].second;

        for (int i = 0; i < n; i++)
            cin >> v[i].first;

        if (n == 1)
        {
            cout << p << "\n";
            continue;
        }
        
        sort(v.begin(), v.end()); // sort by first element

        long long sum = 0; 
        long long trail = 0;

        for (long long i = 0; i < n; i++)
        {
            if (v[i].first > p || trail == n - 1)
                break;
            if (v[i].second < (n - trail - 1))
            {
                sum += (v[i].first * v[i].second);
                trail += v[i].second;
            }
            else
            {
                sum += (v[i].first * (n - trail - 1));
                trail = n - 1;
                break;
            }
        }
        sum += (p * (n - trail));
        cout << sum << endl;
    }

    return 0;
}