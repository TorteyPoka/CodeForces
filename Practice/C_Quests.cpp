/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

int ar1[2000001], ar2[2000001];

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> ar1[i];
        for (int i = 0; i < n; i++)
            cin >> ar2[i];

        vector<pair<int, int>> vp;

        int suffSum = 0;
        int multiplyer = 0;
        int startPoint = min(n,k);
        for (int i = startPoint - 1; i >= 0; i--)
        {
            suffSum += ar1[i];
            vp.push_back(make_pair(suffSum, (ar2[i] * multiplyer)));
            multiplyer++;
        }

        sort(vp.begin(), vp.end(), [](pair<int,int>p1, pair<int,int>p2){return p1.first > p2.first;});

        int totalSum = ar1[0];
        int turns = k;
        turns--;
        for(int i = 1; i<startPoint; i++)
        {
            if(vp[i].first > vp[i-1].second)
            {
                totalSum+=ar1[i];
                turns--;
            }
            else
            {
                totalSum+= //Nah, emne kora jabe na. Wrong Approach;
            }
        }

        // for (auto i : vp)
        //     cout << i.first << " " << i.second << endl;
        // cout << endl;
    }
    return 0;
}