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

string VOWELS = "aeiou";
void crack()
{

    int n;
    cin >> n;

    vector<int> v(5, n / 5);
    for (int i = 0; i < n % 5; i++)
        v[i]++;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < v[i]; j++)
            cout << VOWELS[i];

    cout << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}