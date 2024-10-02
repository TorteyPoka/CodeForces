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

    int n;
    cin >> n;
    string s;
    cin >> s;

    char q = s[0];
    int xnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (q == s[i])
            xnt++;
    }

    if (s == "LLO" || s == "OOL")
        cout << 2 << endl;
    else if (xnt == 1)
        cout << -1 << endl;
    else
        cout << 1 << endl;

    return 0;
}