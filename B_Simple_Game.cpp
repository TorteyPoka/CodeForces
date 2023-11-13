/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
// Simple Game

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int mid = n / 2;
    if (n == 1 && m == 1)
        cout << "1" << endl;
    else if (mid < m)
        cout << m - 1;
    else
        cout << m + 1;

    return 0;
}