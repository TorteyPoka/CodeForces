/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int totalShovel = 0;
    int Spend = 0; // increase by 1 with shovel price k;

    int k, r;
    cin >> k >> r;

    while (1)
    {
        if ((Spend % 10 == 0 && totalShovel != 0) || Spend % 10 == r)
        {
            break;
        }
        /*
        if Spend % 10 == r
        then (Spend - r) % 10 == 0;
        */
        totalShovel += 1;
        Spend += k;
    }
    cout << totalShovel;
    return 0;
}