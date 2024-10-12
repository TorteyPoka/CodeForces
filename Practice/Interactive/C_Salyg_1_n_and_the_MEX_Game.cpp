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

const int N = 1e5 + 7;
int ar[N];

vector<int>mex(N, 0);

void crack()
{   
    int n;
    cin>>n;
    int highVal = 0;
    for(int i = 0; i<n; i++){
        cin>>ar[i];
        mex[ar[i]]++;
        highVal = max(highVal, ar[i]);
    }

    int x, y;
    bool invalid = false;

    for(int i = 0; i<highVal; i++){
        if(mex[i] == 0){
            x = i;
            break;
        }
    }

    cout << x << endl << endl;
    cout.flush();

    while(y != -1){
        
    }


    // for(auto i : mex){
    //     if(i == 0){
    //         x = i;
    //         break;
    //     }
    // }

    // while(y != -1){
    //     if(y == -2){
    //         invalid = true;
    //         break;
    //     }

    // }
    


}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}