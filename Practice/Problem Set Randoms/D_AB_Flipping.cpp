#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int first_a = n-1;
        int last_b = 0;
        if(n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        bool f1 = false, f2 = false;

                //new implementation, same approach;

        cout << max(0, (last_b - first_a)) << endl;

    }

    return 0;
}