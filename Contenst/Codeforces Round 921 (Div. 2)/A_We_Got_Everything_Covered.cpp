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
        int n, k;
        cin >> n >> k;

        string s = "abcdefghijklmnopqrstuvwxyz";

        string s1 = s.substr(0, k);

        int position = 0;

        for (int i = 0; i < n; i++)
        {
            cout << s1;
            char lastChar = s1.back();
            s1.pop_back();
            s1.insert(s1.begin(), lastChar);
        }
        cout << endl;

        /*
        for(int i = 0; i < 3; ++i) {
        char lastChar = str2.back();
        str2.pop_back();
        str2.insert(str2.begin(), lastChar);
        }
        */
    }
    return 0;
}