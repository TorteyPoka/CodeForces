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
    int n, k;
    cin >> n >> k;
    map<int, int> freq;
    while (n--)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    vector<int> temp;
    for (auto i : freq)
    {
        temp.push_back(i.first);
    }
    temp[temp.size() - 1] = freq[temp[temp.size() - 1]];
    for (int i = temp.size() - 2; i >= 0; i--)
    {
        temp[i] = temp[i + 1] + freq[temp[i]];
    }
}

void answer()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> tp;
    for (auto i : mp)
    {
        tp.push_back(make_pair(i.first, i.second));
    }
    sort(tp.begin(), tp.end());

    int ans = 0;
    int l = tp.size();

    for (int i = 0; i < l - 1; i++)
    {
        int window_sum = tp[i].second;
        for (int j = i+1; j < min(i + k, l - 1); j++)
        {
            if (tp[j].first + 1 == tp[j + 1].first)
            {
                window_sum += tp[j + 1].second;
            }
            else
                break;
        }
        ans = max(ans, window_sum);
    }

    for (auto i : tp)
        cerr << i.first << " " << i.second << endl;
    cerr << endl;

    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    // crack();
    answer();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}