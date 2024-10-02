#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int maxEle = *max_element(v.begin(), v.end());

    cout << n - maxEle << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}