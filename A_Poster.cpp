/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    bool neededShift = 0;

    if (k != n && k > 1)
    {
        if (k > (n - k))
        {
            for (int i = k; i < n; i++)
            {
                cout << "RIGHT" << endl;
            }
            neededShift = 1;
        }
        else
            for (int i = 1; i < k; i++)
            {
                cout << "LEFT" << endl;
            }
    }
    else if (k == n)
    {
        neededShift = 1;
    }

    string dialogueL = "LEFT", dialogueR = "RIGHT";

    if (neededShift)
        for (int i = n - 1; i >= 0; i--)
        {
            cout << "PRINT "
                 << s[i] << endl;
            if (i > 0)
                cout << dialogueL << endl;
        }
    
    else
        for (int i = 0; i < n; i++)
        {
            cout << "PRINT "
                 << s[i] << endl;
            if (i < n - 1)
                cout << dialogueR << endl;
        }

    return 0;
}