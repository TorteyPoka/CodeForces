/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n <= 3)
            cout << s << endl;
        else
        {
            set<char> V;
            V.insert('a');
            V.insert('e');
            set<char> C;
            C.insert('b');
            C.insert('c');
            C.insert('d');
            int j = n;
            for (int i = 0; i < n - 3;)
            {
                if (C.count(s[i]) && V.count(s[i + 1]) && C.count(s[i + 2]) && C.count(s[i + 3]))
                {
                    cout << s[i] << s[i + 1] << s[i + 2] << '.';
                    i += 3;
                }
                else
                {
                    cout << s[i] << s[i + 1] << '.';
                    i += 2;
                }
                j = i;
            }
            for (int k = j; k < n; ++k)
                cout << s[k];
            cout << endl;
        }
    }
    return 0;
}