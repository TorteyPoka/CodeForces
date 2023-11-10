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

    int ar[3];
    int temp;

    if (n == 0)
    {
        cout << "0 0 0";
    }
    else if (n == 1)
    {
        cout << "0 0 1";
    }
    else if (n == 2)
    {
        cout << "0 1 1";
    }
    else if (n == 3)
    {
        cout << "1 1 1";
    }
    else
    {
        ar[2] = round(n / ((1 + sqrt(5)) / 2));
        temp = round(ar[2] / ((1 + sqrt(5)) / 2));
        ar[1] = round(temp / ((1 + sqrt(5)) / 2));
        ar[0] = round(ar[1] / ((1 + sqrt(5)) / 2));
        cout << ar[0] << " " << ar[1] << " "<<ar[2];
    }
    return 0;
}