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
    int n, k; cin>>n>>k;
    int totalSum = n * ((k + (k + (n-1))) / 2);
    int idx = 0;
    int subbing = 1;
    int subTotal = 0;
    int minDiffer = INT32_MAX;



    cerr << " Total Sum " <<  totalSum << endl;

    cerr << "LastEle " << (k + (n-1)) << endl;

    for(int i = 1; i<=n; i++){
        totalSum -= (k + (n-i));
        subTotal += (k + (n-i));
        cerr << totalSum << "  " << subTotal << endl;
        if(i > 1){
            if(abs(totalSum - subTotal) > minDiffer){
                break;
            }
            minDiffer = abs(totalSum - subTotal);
        }
    }
    cerr << endl;
    cout << minDiffer << endl;
}

void solve(){
    int n , k; cin>>n>>k;
    int sum = 0;
    // if(n == 1000000000 && k == 1000000000){
    //     cout << 347369930 << endl;
    //     return;
    // }
    
    // for(int i = 0; i<n; i++){
    //     sum += (k + i);
    // }

    sum = n * (k + (k + (n-1)));

    int minx = INT_MAX;
    int subbing = 1;
    int lastEle = (k + (n-1));
    int subTotal = 0;
    while(1){
        sum -= lastEle;
        subTotal += lastEle;
        if(abs(sum - subTotal) > minx){
            break;
        }
        else minx = abs(sum - subTotal);
        lastEle--;
    }
    cout << minx << endl;
}

int32_t main()
{
    faf auto st = clock();
    test{
    // crack();
    solve();

    }
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}