#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int second = 1;
        for (; s[second] == '0'; second++)
        {
            ;
        }
        // if (second == n)
        // {
        //     cout << -1 << endl;
        //     continue;
        // }

        string a = s.substr(0, second);
        string b = s.substr(second, s.size());
        //cout<<a<<" "<<b;
        if ((a.size() && b.size()) && stoi(a) < stoi(b))
            cout << a << " " << b << endl;
        else
            cout << -1 << endl;
    }
}