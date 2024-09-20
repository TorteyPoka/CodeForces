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

#define inputar(ar, n)          \
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

bool comp1(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first == p2.first)
        return p1.second < p2.second;
}

void crack()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<pair<int, int>> pref_ind;
    int pre = 0;
    pref_ind.push_back(make_pair(0, 1));
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == '(')
        {
            pre++;
            pref_ind.push_back(make_pair(pre, i + 1));
        }
        else
        {
            pre--;
            pref_ind.push_back(make_pair(pre, i + 1));
        }
    }

    sort(all(pref_ind));
    sort(all(pref_ind), comp1);

    // for (auto x : pref_ind)
    //     cout << x.first << " " << x.second << endl;
    // cout << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[pref_ind[i].second - 1];
    }
    cout << endl;
}

int32_t main()
{
    // faf auto st = clock();
    faf
    crack();

    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}