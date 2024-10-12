/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

        int n;
    cin >> n;
    vector<int> one, two, thr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            one.push_back(i+1);
        else if (x == 2)
            two.push_back(i+1);
        else
            thr.push_back(i+1);
    }
    int sz = min({one.size(), two.size(), thr.size()});
    if (sz == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << sz << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << one[i] << " " << two[i] << " " << thr[i] << endl;
    }

    return 0;
}