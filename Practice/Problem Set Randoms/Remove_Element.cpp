
/// accepted

#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int maxEle = *max_element(v.begin(), v.end());
    int minEle = *min_element(v.begin(), v.end());

    if (maxEle + minEle <= k or n == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}