/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

// int fac (int n)
// {
//     if (n == 1)
//         return 1;
//     else
//         return n * fac(n - 1);
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int l = 0;
    int h = 0;
    
    if (m == n)
    {
        cout << l << " " << h << endl;
    }
    else if(m == 1)
    {
        l = h = (n - m + 1) * (n - m) / 2;
    }
    else
    {
        l = n - m;
        h = (n - m + 1) * (n - m) / 2;
    }
    cout << l << " " << h << endl;

    return 0;
}