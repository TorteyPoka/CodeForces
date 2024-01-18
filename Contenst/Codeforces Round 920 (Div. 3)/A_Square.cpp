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
        vector<int>v;
        for (int i = 0; i < 4; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        cout << (v[3] - v[0]) *  (v[3] - v[0]) << endl;
    }

    return 0;
}