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
        int n, m;
        cin >> n >> m;

        int x = n / 2;
        int y = m / 2;
        cout<<x << " " << y << endl;

        for (int i = 0; i < 3; i++)
        {
            if (x + y >= n && x + y >= m)
            {
                if (x % 2 == 0 && y % 2 == 0)
                {
                    cout << x << " " << y << endl;
                    break;
                }
                else
                {
                    if (x % 2 == 1)
                        x += 1;
                    else
                        y -= 1;
                }

                if (x % 2 == 1 && y % 2 == 1)
                {
                    cout << x << " " << y << endl;
                    break;
                }
                else
                {
                    if(x%2 == 0)
                        x+=1;
                    else y-=1;
                }
            }
        }
    }
    return 0;
}