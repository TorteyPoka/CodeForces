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
    int n = s.size();
    if (n == 1)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == s[i+1]){
                cout << s[i] << s[i+1] << endl;
                return;
            }
        }
        for(int i = 0; i<n-2; i++){
            if(s[i] != s[i+1] and s[i+1] != s[i+2] and s[i] != s[i+2]){
                cout << s[i] << s[i+1] << s[i+2] << endl;
                return;
            }
        }
        cout << -1 << endl;
    }
}

signed main()
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