/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        ll n, m;
        cin >> n >> m;

        int pet[n];
        int vas[m];

        for (int i = 0; i < n; i++)
            cin >> pet[i];

        for (int i = 0; i < m; i++)
            cin >> vas[i];

        sort(vas, vas + m);
        sort(pet, pet + n);

        if (n == 1)
        {
            if (vas[m - 1] > pet[0])
                cout << vas[m - 1] - pet[0] << endl;
            else
                cout << pet[0] - vas[m - 1] << endl;
        }
        else
        {
            int sum = 0;

            int Pstart = 0, Pend = n - 1, vStart = 0, vEnd = m - 1;

            while (Pstart <= Pend)
            {
                sum += (vas[vEnd] - pet[Pstart]);
                vEnd--;
                Pstart++;
                if (vEnd >= Pstart)
                {
                    sum += (pet[Pend] - vas[vStart]);
                    Pend--;
                    vStart++;
                };
            }
            cout << sum << endl;
        }

        // for (auto i : pet)
        //     cout << i << " ";
        // cout << endl;
    }
    return 0;
}