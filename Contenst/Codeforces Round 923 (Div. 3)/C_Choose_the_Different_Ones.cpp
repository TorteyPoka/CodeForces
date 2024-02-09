/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
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
        int n, m, k;
        cin >> n >> m >> k;

        int commons = 0;
        int firstArrayChars = k/2;
        int secondArrayChars = k/2;

        vector<int> ans;
        map<int, int> mp1, mp2;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!mp1[x] && x <= k)
                mp1[x]++;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (!mp2[x] && x <= k)
                mp2[x]++;
        }

        for(int i = 1; i<=k; i++)
        {
            if(mp1[i] && !mp2[i]) firstArrayChars--;
            else if(!mp1[i] && mp2[i]) secondArrayChars--;
            else if(mp1[i] && mp2[i]) commons++;
        }

        // cout << firstArrayChars << " " << secondArrayChars << " " << commons << endl;

        if(firstArrayChars >= 0 && secondArrayChars >= 0)
        {
            if(((firstArrayChars+secondArrayChars) - commons) == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}