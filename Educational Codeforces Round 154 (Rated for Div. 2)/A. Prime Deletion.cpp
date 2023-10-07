#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int N = stoi(s);

        int l = s.size();

        int front = 0;
        int back = l;
        int mid = l / 2;

        for (int i = 0; i < l; i++)
        {
            int cnt = 0;
            int pos = 0;

            if (l <= 2)
            {
                cout << -1 << endl;
                break;
            }
            else
            {
                for (int j = 2; j < N / 2; j++)
                {
                    if (N % j == 0)
                    {
                        cnt = 1;
                        break;
                    }
                }
                if (cnt == 0)
                {
                    cout << N << endl;
                    break;
                }
                else if (pos % 2 == 0)
                {
                    s.erase(back - 1);
                    back--;
                    N = stoi(s);
                    pos++;
                }
                else if (pos % 2 == 1)
                {
                    s.erase(s.begin() + 0);
                    front++;
                    N = stoi(s);
                    pos++;
                }
                else
                {
                    s.erase(s.begin + mid);
                    front++;
                    back--;
                    N = stoi(s);
                    pos++;
                }
            }
        }
    }
    return 0;
}