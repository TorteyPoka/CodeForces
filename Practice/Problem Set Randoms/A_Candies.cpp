#include<bits/stdc++.h>
using namespace std;

    // @author : TorteyPoka

#define test  \
    int T;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/


void crack()
{
    int n;
    cin>>n;
    int k = 3, p = 2;
    int rem = n%k;
    while(rem != 0){
        k += pow(2.00, p);
        rem = n%k;
        p++;
    }
    cout << n/k << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}