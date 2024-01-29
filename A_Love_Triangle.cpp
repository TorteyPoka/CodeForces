#include <bits/stdc++.h>
using namespace std;

#define ll long long

// bool comp(pair<int,int>p1, pair<int, int>p2)
// {
//     return p1.second < p2.second;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int ar[5001];

    // vector<pair<int, int>> vP;

    for (int k = 1; k <= n; k++)
    {
        // int x;
        cin >> ar[k];
        // cin >> x;
        // vP.push_back(make_pair(k, x));
    }

    // sort(vP.begin(), vP.end(), comp);

    // for (int i = 0; i < n; i++)
    //     cout << vP[i].first << " " << vP[i].second << endl;

    bool triangle = false;
    if (n < 3)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        // cout << vP[vP[i].second].second << " " << vP[i].first << " " <<
        // vP[vP[vP[i].second].second].second << " " << endl;
        // cout << i << " " <<
        // vP[i].second << " ";
        //  <<
        // vP[vP[i].second - 1].second << " " <<
        // vP[vP[vP[i].second].second - 2].second <<" " <<
        // vP[i].first << " " <<
        // vP[i].second<< endl;

        // cout << "Check";
        for (int i = 1; i <= n; i++)
        {
            // if (vP[vP[vP[i].second].second].second == vP[i].first)
            // {
            //     triangle = true;
            //     break;
            // }

            if (ar[ar[ar[i]]] == i)
            {
                triangle = true;
                break;
            }
        }
    }
    if (triangle)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
