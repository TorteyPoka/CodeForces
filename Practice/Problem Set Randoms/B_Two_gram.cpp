#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

int32_t main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mps;
    /*
        fas
    */
    for (int i = 0; i < n - 1; i++)
    {
        string q = s.substr(i, 2);
        // cerr << q << " ";
        mps[q]++;
    }
    // cerr << endl;
    int ans = 0;
    string sna;

    for (auto I : mps)
        ans = max(ans, I.second);
    for (auto I : mps)
        if (ans == I.second)
        {
            cout << I.first << endl;
            break;
        }
    return 0;
}