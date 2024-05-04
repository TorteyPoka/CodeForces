/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

class Input
{
public:
    void ar(int ar[], int n)
    {
        for (int i = 0; i < n; i++)
            cin >> ar[i];
    }
    void map_int(int ar[], int n, map<int, int> &mp)
    {
        for (int i = 0; i < n; i++)
            mp[ar[i]]++;
    }
    void map_str(string s, map<char, int> &mp)
    {
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
    }
};
Input read;

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)
#define inpar(ar, n)            \
    for (int i = 0; i < n; i++) \
        cin >> ar[i];
#define printar(ar, n)          \
    for (int i = 0; i < n; i++) \
        cout << ar[i] << " ";   \
    cout << endl;
#define printvec(v)       \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl;
#define all(v) v.begin(), v.end()

void crack()
{
    int n, k, pB, pS;
    int ar[n], br[n];
    read.ar(ar, n);
    read.ar(br,n);
    

            int Shasha = 0,
                Bodya = 0;
    for (int i = 1; i < k; i++)
    {
        Shasha += br[pS];
        Bodya += br[pB];
        if (br[ar[pS]] > ar[br[pS]])
        {
            pS = ar[pS];
        }
        if (br[ar[pB]] > ar[br[pB]])
        {
            pB = ar[pB];
        }
    }
    if (Shasha > Bodya)
        cout << "Shasha" << endl;
    else if (Bodya > Shasha)
        cout << "Bodya" << endl;
    else
        cout << "Draw" << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}