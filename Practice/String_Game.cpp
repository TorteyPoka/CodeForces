/// https://www.codechef.com/NOV221C/problems-old/ABSTRING

#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    unordered_map<char, int> cmp;
    for (auto i : str)
        cmp[i]++;

    bool flag = true;
    for (auto i : cmp)
    {
        if (i.second % 2 != 0)
        {
            flag = 0;
            break;
        }
        // cout << i.first << " " << i.second << endl;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}