#include <bits/stdc++.h>
using namespace std;

#define endll "\n"
#define int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int N = 1e3 + 7;

void crack()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> mex;
    for (int i = 0; i <= n; i++)
        mex.insert(i);
    int freq[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ++freq[v[i]];
        if (mex.find(v[i]) != mex.end())
            mex.erase(v[i]);
    }
    int currmex = *mex.begin();
    vector<int> ans;

    while (!is_sorted(v.begin(), v.end()))
    {
        cerr << currmex << " ";
        if (currmex == n)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] != i)
                {
                    ans.push_back(i);
                    --freq[v[i]];
                    if (freq[v[i]] == 0)
                        mex.insert(v[i]);
                    v[i] = currmex;
                    ++freq[currmex];
                    mex.erase(currmex);
                    break;
                }
            }
        }
        else
        {
            ans.push_back(currmex);
            --freq[v[currmex]];
            if (freq[v[currmex]] == 0)
                mex.insert(v[currmex]);
            v[currmex] = currmex;
            ++freq[currmex];
            mex.erase(currmex);
        }
        currmex = *mex.begin();
    }
    cerr << endl;
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i + 1 << ' ';
    cout << endl;
}

signed main()
{
    fast int T;
    cin >> T;
    while (T--)
    {
        crack();
    }
    return 0;
}