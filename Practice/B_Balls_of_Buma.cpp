// !Wrong Approach

// ? Proper use of binary search

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

    string s;
    cin >> s;

    if (s[0] != s[s.size() - 1])
    {
        cout << 0 << endl;
    }
    else
    {
        int cntLetter = 0;
        char c = s[0];
        int diffInd = 0;
        int ans = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != c)
            {
                cntLetter++;
                c = s[i];
                if (!diffInd)
                    diffInd = i;
            }
        }
        if (cntLetter != 2)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = diffInd + 1; i < s.size(); i++)
            {
                if (s[i] != s[i - 1])
                {
                    break;
                }
                else
                    ans++;
            }
            // cout << ans << " " << (s.size() - ans) << endl;
            if (ans > 1 && (s.size() - ans) > 2)
            {
                cout << ans + 1 << endl;
            }
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
