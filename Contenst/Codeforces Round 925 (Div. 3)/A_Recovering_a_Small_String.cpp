/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

void ans(string s)
{
    int n;
    cin >> n;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        string s = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        vector<char> ans;
        int n;
        cin >> n;
        int temp = 0;

        if (n == 78)
        {
            cout << "zzz";
        }
        else if (n < 78 && n > 52)
        {
            cout << s[n - 53] << "zz";
        }
        else if (n <= 52 && n > 28)
        {
            cout << 'a' << s[(n - 27) - 1] << 'z';
        }
        else
        {
            cout << "aa" << s[n - 3];
        }

        // if (n > 52)
        // {
        //     if((n-52) <= 26)
        //     {
        //         cout << s[n-53];
        //         cout << "zz";
        //     }
        //     else cout << "zzz";
        // }
        // else if (n <= 52 && n > 26)
        // {
        //     cout << 'a';
        //     n--;
        //     cout << s[n - 27];
        //     cout << 'z';
        // }
        // else
        // {
        //     cout << "aa";
        //     n -= 2;
        //     cout << s[n-1];
        // }

        // if (n > 52)
        // {
        //     temp = n % 26;

        //     n -= temp;
        //     cout << s[temp-1];
        //     while (n != 0)
        //     {
        //         cout << 'z';
        //         n -= 26;
        //     }
        // }
        // else if(n<=52 && n>26){
        //     cout << 'a';
        //     n-=1;
        //     cout << s[n-27];
        //     cout << 'z';
        // }
        // else
        // {
        //     for (int i = 0; i < 3; i++)
        //     {
        //         if (i == 2)
        //             cout << s[n - 3];
        //         else
        //             cout << 'a';
        //     }
        // }
        cout << endl;
    }
    return 0;
}