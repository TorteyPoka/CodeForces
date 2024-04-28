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

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        int ar[n], sameCount = 0, start = 0, end = n - 1, fromFirst = 0, fromLast = n - 1;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (i > 0)
            {
                if (ar[i] == ar[i - 1])
                    sameCount++;
            }
        }
        if (n == 1 || sameCount == n)
        {
            cout << 0 << endl;
            continue;
        }
        if (n == 2)
        {
            if (ar[0] == ar[1])
                cout << 0 << endl;
            else
                cout << 1 << endl;
            continue;
        }
        while (start < end)
        {
            if (ar[start] == ar[end])
            {
                if (ar[start] == ar[start + 1] && start + 1 != end)
                    start++;
                end--;
            }
            else if (ar[start] == ar[start + 1] && start + 1 != end)
            {
                start++;
            }
            else if (ar[start] != ar[end])
            {
                if (ar[fromFirst] == ar[fromFirst + 1])
                    fromFirst++;
                else if (ar[fromLast] == ar[fromLast - 1])
                    fromLast--;
                else
                    break;
            }
        }

        int ans1 = 0, ans2 = end - start;

        if (fromLast >= (n - fromFirst) - 1)
        {
            ans1 = (n - fromFirst) - 1;
        }
        else
        {
            ans1 = fromLast;
        }

        cout << min(ans1, ans2) << endl;
    }
    return 0;
}