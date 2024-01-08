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
        int a, b;
        cin >> a >> b;

        if (a == 1)
        {
            cout << b * b << endl;
        }
        else
        {
            for (int i = 1; i < b; i++)
            {
                if ((i * b) % a == 0 && (i*b) > b)
                {
                    cout << (i * b) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}