#include<bits/stdc++.h>
using namespace std;

int OP(int n, int ar[])
{
    int c(0);
    for (int i = 1; i < n; i++)
    {
        if ((ar[i] % 2) == (ar[i-1] % 2))
        c++;
    }
    return c;
}

int main()
{
    int tst, n;
    cin >> tst;
    while (tst--)
    {
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        cout << OP(n, ar) << endl;
    }
    return 0;
}