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

void crack()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    map<char, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }
    int g = 0, r = 0;
    for(auto i : freq){
        if(i.second >= 2){
            g++, r++;
            continue;
        }
        if(g < r)g++;
        else r++;
    }
    cout << min(r, g) << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}