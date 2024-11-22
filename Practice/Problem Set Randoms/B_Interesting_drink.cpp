#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/

int32_t main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = -1, r = n;
        while (r > l + 1)
        {
            int m = (r + l) / 2;
            if (ar[m] > x)r = m;
            else l = m;
        }
        cout << l + 1<< endl;
    }

    return 0;
}