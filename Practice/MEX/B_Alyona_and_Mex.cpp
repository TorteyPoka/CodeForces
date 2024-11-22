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
    int ar[n + 1];
    int freq[n + 2] = {0};
    set<int> mex;
    for (int i = 1; i <= n + 1; i++)
    {
        mex.insert(i);
    }
    // for (auto i : mex)
    //     cerr << i << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);

    for (int i = 0; i < n; i++)
    {
        if (ar[i] >= *mex.begin())
        {
            mex.erase(mex.begin());
        }
    }
    cout << *mex.begin() << endl;

    return 0;
}