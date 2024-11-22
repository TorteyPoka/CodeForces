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
/*
    NNEESW
    y = 1;
    x = 1;
    NNEESW
    x = 1; y = 1;
    NNE
    x = 1;
    y = 2;
*/
void crack()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    bool ok = false;
    int idx = 0;
    int N = 0, W = 0, E = 0, S = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
            N++;
        else if (s[i] == 'S')
            S++;
        else if (s[i] == 'E')
            E++;
        else
            W++;
    }
    if(N == S and S == E and E == W){
        if(a == 0 and b == 0){cout << "YES" << endl;}
        else cout << "NO" << endl;
        return;
    }
    while (x <= a and y <= b)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
                y++;
            else if (s[i] == 'S')
                y--;
            else if (s[i] == 'E')
                x++;
            else 
                x--;
            if (x == a and y == b)
            {
                ok = true;
                break;
            }
            if (x > a or y > b)
                break;
        }
        if (ok)
            break;
    }
    cerr << x << " " << y << endl;
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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