#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

int_fast32_t main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    if (n & 1)
    {
        cout << -1 << endl;
    }
    else
        for (int i = n; i >= 1; i--)
            cout << i << " ";
    cout << endl;

    return 0;
}