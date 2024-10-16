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
    bool sits = false;
    vector<string> vs;
    while (n--)
    {
        string s;
        cin >> s;
        if (!sits)
            if (s[0] == 'O' and s[1] == 'O')
            {
                s[0] = s[1] = '+';
                sits = true;
            }
            else if (s[3] == 'O' and s[4] == 'O')
            {
                s[3] = s[4] = '+';
                sits = true;
            }
        vs.push_back(s);
    }
    if (sits)
    {
        cout << "YES" << endl;
        for (auto i : vs)
        {
            cout << i << endl;
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}