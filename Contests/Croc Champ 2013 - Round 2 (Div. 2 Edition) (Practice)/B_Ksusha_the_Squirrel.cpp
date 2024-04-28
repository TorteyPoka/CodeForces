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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    bool ok = true;
    for (int i = 0; i < n;)
    {
        bool globeBreak = true;
        if (s[i] == '.')
        {
            i++;
        }
        else
        {
            int start = i, cnt = 1;
            while(cnt <= k)
            {
                if(s[start] == '.')
                {
                    globeBreak = false;
                    i = start;
                    break;
                }
                start++;
                cnt++;
            }
            if (globeBreak)
            {
                ok = false;
                break;
            }
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    /*
        i = 1; j = i-1; j = 0; k = 3; 0 1-2-3;
    */

    return 0;
}