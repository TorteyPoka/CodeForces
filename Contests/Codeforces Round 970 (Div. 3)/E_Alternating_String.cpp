/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

struct CWP
{
    char c;
    int oddOcc = 0, evOcc = 0, totalOcc = 0;
};
typedef struct CWP cwp;

void crack()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cwp charMilao[n];

    for (int i = 0; i < n; i++)
    {
        charMilao[s[i]].c = s[i];
        if ((i + 1) % 2 == 0)
            charMilao[s[i]].evOcc++;
        else charMilao[s[i]].oddOcc++;
        charMilao[s[i]].totalOcc++;
    }

    for(int i = 0; i<)
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}