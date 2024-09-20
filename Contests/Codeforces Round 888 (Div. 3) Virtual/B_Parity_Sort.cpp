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
    int n; cin>>n;
    int high = INT_MIN, low = INT_MAX;
    int ar[n];

    for(int i = 0; i<n; i++){
        cin>>ar[i];
        high = max(ar[i], high);
        low = min(low, ar[i]);
    }
    if(is_sorted(ar, ar+n)){
        cout << "YES" << endl;
        return;
    }

    bool lowPas = true;
    bool highPas = true;

    if(ar[n-1] != high){
        if(ar[n-1] % 2 == 0 && high % 2 != 0){
            highPas = false;
        }
        if(ar[n-1] % 2 != 0 && high % 2 == 0){
            highPas = false;
        }
    }
    if(ar[0] != low){
        if(ar[0] % 2 == 0 && low % 2 != 0){
            lowPas = false;
        }
        if(ar[0] % 2 != 0 && low % 2 == 0){
            lowPas = false;
        }
    }


    // bool lowPoss = false;
    // bool possible = false;
    // if(ar[n-1] != high){
    //     if((ar[n-1] % 2 == 0 && high % 2 == 0) || (ar[n-1] % 2 == 1 && high % 2 == 1)){
    //         possible = true;
    //     }
    // }else possible = true;
    // if(ar[0] != low){
    //     if((ar[0] % 2 == 0 && low % 2 == 0) || (ar[0] % 2 == 1 && low % 2 == 1)){
    //         lowPoss = true;
    //     }
    // }else lowPoss = true;

    if(highPas && lowPas)cout << "YES";
    else cout << "NO";
    cout << endl;
    
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}   