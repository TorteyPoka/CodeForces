#include <bits/stdc++.h>
using namespace std;

#define int long long
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
        int n, k;
        cin >> n >> k;
        int p = n - k;
        int y = p-1;

        for(int i = p; i<=n; i++)
            cout << i << " ";
        for(int i = y; i>=1; i--)
            cout << i << " ";
        cout<<endl;
    }

    return 0;
}