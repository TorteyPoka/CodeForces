#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, c,d;
    cin >> a;
    string s;
    cin >> s;
    c = 0;
    d = 0;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'L')
        {
            c--;
        }
        else
        {
            d++;
        }
    }

    cout << d - c + 1 << endl;

    return 0;
}
