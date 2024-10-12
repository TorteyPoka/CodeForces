/* Solposed by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test   \
    int T = 1; \
    while (T--)

const int N = 5*1e3 + 6;

int n, a, b, c, judge;

/*
    a = 9, b = 7, c = 9;
    pos[2] = (b+c-a) / 2 
    = (7+9-9) / 2;
    = 7 / 2 = 3;
    pos[2] = 3;
    pos[1] = b - pos[2];
    = 7 - 3 = 4
    pos[1] = 4;
    pos[0] = c - pos[2];
    = 9 - 3 = 6;
    pos[0] = 6;
*/

void crack()
{
    cin >> n;
    vector<int>pos(n+1);

    cout << "? 1 2" << endl;
    cout.flush();

    cin >> a;

    cout << "? 2 3" << endl;
    cout.flush();

    cin >> b;

    cout << "? 1 3" << endl;
    cout.flush();

    cin >> c;
    // cerr << a << " " << b << " " << c << " ";
    pos[2] = (b + c - a) / 2;
    pos[1] = b - pos[2];
    pos[0] = c - pos[2];

    for (int i = 3; i < n; i++)
    {
        cout << "? 1 " << i + 1 << endl;
        cout.flush();
        cin >> judge;
        cerr << judge << " ";
        pos[i] = judge - pos[0];
    }
    cerr << endl;
    cout << "! ";
    for (int i = 0; i < pos.size() - 1; i++)
    {
        cout << pos[i] << " ";
    }
    return;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}