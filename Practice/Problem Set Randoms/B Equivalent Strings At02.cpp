/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a >> b;

    long long l1, l2;
    l1 = a.size();
    l2 = b.size();

    if (l1 != l2 || l1 < 2 || l2 < 2 || l1 < 2 && l2 < 2)
        cout << "NO";
    else
    {
        string a1, a2, b1, b2;
        a1 = a.substr(0, (l1 / 2));
        a2 = a.substr((l1 / 2), (l1 / 2));
        b1 = b.substr(0, (l1 / 2));
        b2 = b.substr((l1 / 2), (l1 / 2));

        // if(a1.size() == b1.size() && a2.size() == b2.size() || a1.size() == b2.size() && a2.size() == b1.size())
        //     cout << "Size doesn't matter" << endl;
        // for(int i = 0; i < a1.size(); i++)
        // {
        //     cout << b2[i];
        // }
        // cout << endl;
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        sort(b1.begin(), b1.end());
        sort(b2.begin(), b2.end());

        // for(int i = 0; i < a1.size(); i++)
        // {
        //     cout << b2[i];
        // }
        // cout << endl;

        // long long sumA1 = 0, sumA2 = 0, sumB1 = 0, sumB2 = 0;

        // for (int i = 0; i < a1.size(); i++)
        // {
        //     sumA1 += (int)a1[i];
        //     sumA2 += (int)a2[i];
        //     sumB1 += (int)b1[i];
        //     sumB2 += (int)b2[i];
        // }

        // if(a1.size() % 2 == 1 && sumA1 == sumB1 && sumA2 == sumB2)
        // {
        //     cout << "YES";
        // }
        // else if (sumA1 == sumB1 && sumA2 == sumB2 || sumA1 == sumB2 && sumA2 == sumB1)
        // {
        //     cout << "YES";
        // }
        // else{
        //     cout << "NO";
        //     cout << endl << sumA1 << " "
        //     << sumA2 << " "
        //     << sumB1 << " "
        //     << sumB2 << endl;
        // }
        int q = 0, w = 0, e = 0, r = 0, f1 = 0, f2 = 0;
        for (int i = 0; i < a1.size(); i++)
        {
            if (a1[i] == b1[i] && f2 == 0)
            {
                q++;
                f1 = 1;
                if (a2[i] == b2[i])
                    w++;
            }
            if (a2[i] == b1[i] && f1 == 0)
            {
                f2 = 1;
                e++;
                if (a1[i] == b2[i])
                    r++;
            }
        }

        if (q != 0 && w != 0)
        {
            if (q == w)
                cout << "YES";
            else
                cout << "NO";
        }
        if (e != 0 && r != 0)
        {
            if (e == r)
                cout << "YES";
            else
                cout << "NO";
        }
    }

    return 0;
}