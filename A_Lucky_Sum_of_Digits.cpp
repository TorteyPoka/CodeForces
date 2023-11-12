/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int bsev = 0;
    int bfr = 0;

    while (n >= 0)
    {
        if (n % 7 == 0)
        {
            bsev = n / 7;
            n = 0;
            break;
        }
        bfr++;
        n = n - 4;
    }
    if (n == 0)
    {
        for(int i = 0; i<bfr; i++)
            cout << "4";
        for(int i = 0; i<bsev; i++)
            cout << "7";
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}