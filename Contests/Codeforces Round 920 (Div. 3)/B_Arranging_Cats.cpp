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
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != f[i])
                for (int j = i+1; j < n; j++)
                {
                    if(s[i] != s[j] && s[j] != f[j])
                    {
                        swap(s[i], s[j]);
                        cnt++;
                        break;
                    }
                }
        }
        // if(T== 2)
        //     cout << s <<" " << f<< endl;
        for(int i = 0; i<n; i++)
        {
            if(s[i] != f[i])
                cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}