/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
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

        int ar[n];
        int pR = 1;
        int f = 0;

        for (int i = 0; i < n; i++)
            cin >> ar[i];


        for(int i = 0; i<n; i++){
            if (2023 % ar[i] == 0)
            {
                pR *= ar[i];
            }
            else
            {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }

        if (!f)
        {
            // cout  << "Product: "<<pR << endl;
            if (2023 % pR == 0)
            {
                cout << "YES" << endl;

                for (int i = 0; i < k; i++)
                {
                    int res = 2023 / pR;
                    cout << res << " ";
                    pR *= res;
                }
                cout << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}