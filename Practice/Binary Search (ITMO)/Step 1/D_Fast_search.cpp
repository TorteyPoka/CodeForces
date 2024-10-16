/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int n;

int binary_search_L(int *ar, int xy)
{
    int l = -1, r = n;
    while (r > l + 1)
    {
        int mid = (r + l) / 2;
        if (ar[mid] <= xy)
        {
            l = mid;
        }
        else
            r = mid;
    }
    return l+1;
}
int binary_search_R(int *ar, int xy)
{
    int l = -1, r = n;
    while (r > l + 1)
    {
        int mid = (r + l) / 2;
        if (ar[mid] < xy)
        {
            l = mid;
        }
        else
            r = mid;
    }
    return r+1;
}

int32_t main()
{
    fastIO

            cin >>
        n;
    int ar[n];
    for (int &i : ar)
        cin >> i;
    sort(ar, ar + n);
    int k;
    cin >> k;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        int L = binary_search_R(ar, x);
        int R = binary_search_L(ar, y);
        if (L == -1 || R == n + 1)
        {
            cout << 0 << endl;
        }
        else
            cout << R - L + 1<< " ";
    }

    return 0;
}