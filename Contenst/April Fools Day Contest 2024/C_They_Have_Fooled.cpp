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

    int n;
    cin >> n;
    if (n < 5)
        cout << 10 << endl;
    else if (n > 5)
        cout << 0 << endl;
    else
        cout << 7 << endl;

    return 0;
}