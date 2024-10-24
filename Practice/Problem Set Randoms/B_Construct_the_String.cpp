#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define test       \
    int T, tc = 0; \
    cin >> T;      \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

string alpha = "abcdefghijklmnopqrstuvwxyz";
int printsUnique(int k)
{
    int i = 0;
    for (; i < k; i++)
    {
        cout << alpha[i];
    }
    // cerr << i << " ";
    return i;
}

void crack()
{
    int n, a, b;
    cin >> n >> a >> b;
    while (n)
    {
        int g = min({n, a, b});
        int tmpA = a;
        printsUnique(g);
        n-=g;
        tmpA -= g;
        cerr << tmpA  << " ";
        while(tmpA and n){
            cout << alpha[g-1];
            tmpA--;
            n--;
        }
    }cerr << endl;
    cout << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        // cout << "Case " << ++tc << ": ";
        crack();
    }
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}