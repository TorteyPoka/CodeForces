/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.first;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    string s, s1;
    cin >> s >> s1;

    int l = s.size();

    int onex = 0, oney = 0;

    vector<pair<int, int>> vpx, vpy;
    vector<bool> used(l + 1, false);

    // for(int i = 0; i<l; i++)
    // {
    //     if(s[i] == '1')onex++;
    //     if(s1[i] == '1') oney++;
    //     if(s[i] == '1' && s[i] == s1[i])
    //     {
    //         vpx.push_back(make_pair(1,i+1));
    //     }
    // }

    // bool turn = false;
    // for(int i = 0; i < vpx.size(); i++)
    // {
    //     if(!turn)
    //     {
    //         oney--;
    //         turn = true;
    //     }
    //     else
    //     {
    //         onex--;
    //         turn = false;
    //     }
    // }

    // if(onex > oney)
    // {
    //     cout << "First" << endl;
    // }
    // else if(oney > onex) cout << "Second" << endl;
    // else cout << "Draw" << endl;

    vector<int> vxzero, vxone, vyzero, vyone;

    for (int i = 0; i < l; i++)
    {
        int p = i + 1;
        if (s[i] == '1' || s1[i] == '1')
        {
            vpx.push_back(make_pair(s[i] - '0', p));
            vpy.push_back(make_pair(s1[i] - '0', p));
        }
    }

    for (int i = 0; i < vpx.size(); i++)
    {
        if (vpx[i].first == 1 && vpy[i].first == 1)
        {
            vxone.push_back(i + 1);
            vyone.push_back(i + 1);
            vxzero.push_back(-1);
            vyzero.push_back(-1);
        }
        else if (vpx[i].first == 0 && vpy[i].first == 1)
        {
            vxzero.push_back(i + 1);
            vxone.push_back(-1);
            vyone.push_back(-1);
            vyzero.push_back(-1);
        }
        else if (vpy[i].first == 0 && vpx[i].first == 1)
        {
            vyzero.push_back(i + 1);
            vxone.push_back(-1);
            vxzero.push_back(-1);
            vyone.push_back(-1);
        }
    }

    // assert(vxone.size() == vxzero.size() && vxone.size() == vyone.size() && vxone.size() == vyzero.size());

    cout << vxone.size() << " " << vxzero.size() << " " << vyone.size() << " " << vyzero.size() << endl << endl;

    for(int i = 0; i<vxone.size(); i++)
    {
        cout << vxone[i] << " " << vxzero[i] << " " << vyone[i] << " " << vyzero[i] << endl;
    }

    cout << endl;

    // for(int i = 0; i<)

    // sort(vpx.begin(), vpx.end());
    // sort(vpy.begin(), vpy.end(), comp);

    // bool turn = 0;

    for (auto i : vpx)
        cout << i.first << " " << i.second << endl;
    cout << endl;

    for (auto i : vpy)
        cout << i.first << " " << i.second << endl;
    cout << endl;

    // for (int i = 0; i < l; i++)
    // {
    //     if (!turn)
    //     {
    //         if (used[vpx[i].second])
    //             onex--;
    //         else used[vpx[i].second] = true;
    //         turn = 1;
    //     }
    //     else
    //     {
    //         if (vpx[i].second == vpy[i].second)
    //             oney--;
    //         turn = 0;
    //     }
    // }

    if (onex > oney)
    {
        cout << "First" << endl;
    }
    else if (oney > onex)
        cout << "Second" << endl;
    else
        cout << "Draw" << endl;

    return 0;
}