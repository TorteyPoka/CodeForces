/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zeros++;
        else
            ones++;
    }

    if(zeros == 0){
        if(ones == 4){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    else{
        if(((zeros * 2) * 4) == ones){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    return 0;
}