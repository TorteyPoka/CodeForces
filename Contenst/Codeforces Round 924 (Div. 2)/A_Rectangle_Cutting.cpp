/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define endl "\n"

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
        int a, b;
        cin >> a >> b;
        int ev;
        if(b%2 == 0 && a%2 == 0)
        {
            if ((b / 2) != a && (a * 2) != b)
            {
                cout << "Yes" << endl;
            }
            else if((a / 2) != b && (b * 2) != a)
            {
                cout << "Yes" << endl;
            }
            continue;
        }
        if (b % 2 == 0)
        {
            if ((b / 2) != a && (a * 2) != b)
            {
                cout << "Yes" << endl;
                continue;
            }
        }
        else if (a % 2 == 0)
        {
            if ((a / 2) != b && (b * 2) != a)
            {
                cout << "Yes" << endl;
                continue;
            }
        }

        cout << "No" << endl;
    }
    return 0;
}