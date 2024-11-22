#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define test       \
    int T, tc = 0; \
    cin >> T;      \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

void crack()
{
    string s;
    cin >> s;

    /*
        0 1 2 3 4 5 6 7
    */

    int Qr;
    cin >> Qr;
    while (Qr--)
    {
        int pos;
        char v;
        cin >> pos;
        cin>>v;
        s[pos - 1] = v;

        
        // cout << s << endl;
        bool ok = false;
        for (int i = 0; i < s.size() - 3; i++)
        {
            if (s[i] == '1' and s[i+1] == '1' and s[i+2] == '0' and s[i+3] == '0')
            {
                ok = true;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        // cout << "Case " << ++tc << ": ";
        crack();
    }
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}