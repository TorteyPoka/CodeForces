#include "bits/stdc++.h"
using namespace std;
#define int long long
#define OR ||
#define AND &&
bool cmp(pair<int, pair<int, char>> &a, pair<int, pair<int, char>> &b)
{
    return a.second.first >= b.second.first;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    vector<pair<int, pair<int, char>>> mp(s.size());
    int cc = 0;
    mp[0].first = 0;
    mp[0].second.first = 1;
    mp[0].second.second = s[0];

    if (s[0] == '(')
    {
        mp[1].first = 1;
        mp[1].second.second = s[1];
        mp[1].second.first = 2;
    }
    // else
    // {
    //     mp[1].first = -1;
    //     mp[1].second.second = s[1];
    //     mp[1].second.first = 2;
    // }
    for (int i = 2; i < s.length(); i++)
    {
        if (s[i - 1] == '(')
        {
            mp[i].first = mp[i - 1].first + 1;
        }
        else
        {
            mp[i].first = mp[i - 1].first - 1;
        }
        mp[i].second.second = s[i];
        mp[i].second.first = i + 1;
    }
    sort(mp.begin(), mp.end());
    // sort(next(mp.begin()),mp.end(),cmp);
    auto startt = next(mp.begin());
    auto endd = mp.end();
    int diff = 0;
    for (int i = 1; i < mp.size() - 1; i++)
    {
        if (mp[i].first != mp[i + 1].first)
        {
            diff = abs(diff - i);
            sort(startt, startt + diff, cmp);
            // cout<<(startt+diff)->first<<" "<<(startt+diff)->second.first<<" "<<(startt+diff)->second.second<<endl;
            startt += diff;
            // cout<<diff<<endl;
        }
    }

    for (int i = 0; i < mp.size(); i++)
    {
        cout << mp[i].second.second;
    }
    cout << endl;

    return 0;
}