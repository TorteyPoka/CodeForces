/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    string s;
    cin >> s;

    int n = stoi(s);

    if (n >= 0)
    {
        cout << n << endl;
        return 0;
    }

    if (s[s.size() - 1] > s[s.size() - 2])
    {
        n/=10;
    }
    else
    {
        n /= 100;
        string q = to_string(n);
        q += s[s.size() - 1];
        n = stoi(q);
    }
    if(n > 0){
        cout << "-";
    }
    cout << n << endl;
    return 0;
}