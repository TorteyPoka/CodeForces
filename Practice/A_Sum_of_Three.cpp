#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;

        for (int x = 1; x <= 20; x++)
        {
            if (!flag)
                for (int y = 1; y <= 20; y++)
                {
                    if (x + y >= n || x == y)
                        continue;
                    int z = n - x - y;
                    if (z == x || z == y)
                        continue;
                    if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0)
                    {
                        continue;
                    }
                    if (flag == 0)
                    {
                        flag = 1;
                        cout << "YES" << endl;
                        cout << x << ' ' << y << ' ' << z << endl;
                        break;
                    }
                }
            else
                break;
        }
        if(!flag)
            cout << "NO" << endl;
    }
}