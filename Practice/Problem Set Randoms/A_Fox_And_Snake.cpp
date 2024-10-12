/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int flag = -1;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i % 2)
                cout << "#";
            else
            {
                if (!flag % 2 && j == b)
                    cout << "#";
                else
                {
                    if (j == 1)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
        }
        cout << " " << flag << endl;
        cout << endl;
    }

    return 0;
}