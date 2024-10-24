#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/
int n, x, y;
bool good(int t)
{
    if(t < min(x, y))return false;
    t -= min(x,y);
    int cnt = 1;
    cnt += (t/x) + (t/y);
    return cnt >= n;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);

    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n;

    while (r > l + 1)
    {
        int mid = (r + l) / 2;
        if (good(mid))
        {
            r = mid;
        }
        else
            l = mid;
    }
    cout << r << endl;

    return 0;
}