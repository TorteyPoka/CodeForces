/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int start = 0, end = n - 1;
        int cnt = 0;
        while (start < end)
        {
            if (s[start] == s[end])
            {
                if (s[start] != s[start + 1])
                {
                    start += 2;
                    cnt++;
                }
                else
                    start++;

                if (s[end] != s[end - 1])
                {
                    end -= 2;
                    cnt++;
                }
                else
                    end--;
            }
            else
            {
                if (s[start] == s[start + 1])
                {
                    start++;
                    // continue;
                }
                else if (s[end] == s[end - 1])
                {
                    end--;
                    // continue;
                }
                else
                {

                    if ((end - start) >= 4)
                    {

                        start += 2;
                        end -= 2;
                        cnt += 2;
                    }
                    else if (s[start] != s[start + 1])
                    {
                        cnt++;
                        start++;
                    }
                    else if (s[end] != s[end - 1])
                    {
                        cnt++;
                        end--;
                    }
                    else
                        break;
                }
            }
        }
        int maxe = 0;

        if ((n - start) > (n - end))
        {
            maxe = start;
        }
        else
            maxe = end;

        cout <<  abs(maxe - (n - maxe)) << endl;

        // cout<< n - (cnt * 2) << endl;
    }
    return 0;
}