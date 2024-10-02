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
        string s;
        cin >> s;
        for (char c = 'a'; c <= 'h'; c++)
        {
            if (c != s[0])
                cout << c << s[1] << endl;
        }
        for (int i = 1; i <= 8; i++)
        {
            if (i != s[1] - '0')
                cout << s[0] << i << endl;
        }
    }
    return 0;
}