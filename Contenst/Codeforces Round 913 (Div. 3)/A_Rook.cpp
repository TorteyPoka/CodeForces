/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define int long long
#define end "\n"

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
        // cout << s[0] << " " << s[1] << endl;

        for (char i = 'a'; i < 'i'; i++)
        {
            if (i != s[0])
                cout << i << s[1] << endl;
        }
        for (int i = 1; i < 9; i++)
        {
            if (i != s[1]-'0')
                cout << s[0] << i << endl;
        }
    }
    return 0;
}