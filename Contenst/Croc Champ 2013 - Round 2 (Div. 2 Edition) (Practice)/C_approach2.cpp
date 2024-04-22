/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, l  = 0, f = 0, g = 0, k = 0;
    string s, s1;
    cin >> n >> s >> s1;
    n += n;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s1[i] && s[i] == '1')
            k++;
        if (s[i] == '1' && s1[i] == '0')
            f++;
        if (s[i] == '0' && s1[i] == '1')
            g++;
    }

    if (k % 2 == 1)
        l++;
    if (g - f - l > 1)
        cout << "Second";
    if (g - f - l < 0)
        cout << "First";
    if (g - f - l == 0 || g - f - l == 1)
        cout << "Draw";

    return 0;
}