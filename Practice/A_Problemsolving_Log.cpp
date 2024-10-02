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
        string s;
        cin >> s;
        int ans[27]{};
        for (int i = 0; i < 26; ++i)
            ans[i] = i + 1;
        int track[27]{};
        for (int i = 0; i < s.size(); ++i)
        {
            track[s[i] - 'A']++;
        }
        // sort(track, track + 26);
        int cnt = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (track[i] >= ans[i] && track[i] <= n)
            {
                ++cnt;
                n -= track[i];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}