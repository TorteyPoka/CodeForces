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

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool f = true;
    while (n--)
    {
        if (f)
        {
            if (ar[l] > ar[r])
                sereja += ar[l++];

            else
                sereja += ar[r--];
            f = false;
        }
        else
        {
            if (ar[l] > ar[r])
                dima += ar[l++];
            else
                dima += ar[r--];
            f = true;
        }
    }

    // for(int i = 0; i<n; i++) cout << ar[i] << " "; cout << endl;
    // for(auto i : v1) cout << i << " "; cout << endl;
    // for(auto i : v2) cout << i << " "; cout << endl;

    cout << sereja << " " << dima;

    return 0;
}
