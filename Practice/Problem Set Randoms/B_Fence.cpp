#include <bits/stdc++.h>
using namespace std;

// @author : TorteyPoka

#define endl '\n'
#define int long long
/*------------X------------*/
// int window_sum(int* ar, int i, int k){
//     int winSum = 0;
//     for(int j = i; j<=i+k-1; j++){
//         winSum += ar[j];
//         // cerr << ar[j] << " ";
//     }
//     return winSum;
// }

int32_t main()
{
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    int winSum = 0, minSum = INT32_MAX;
    int idx = 1;
    int start = 1, end = k;
    for (int i = start; i < end; i++)
    {
        winSum += ar[i];
    }
    minSum = min(minSum, winSum);
    while (end < n)
    {
        winSum -= ar[start++];
        winSum += ar[++end];
        if (minSum > winSum)
        {
            minSum = winSum;
            idx = start;
        }
    }
    // for(int i = 1; i<=n-k; i++){
    //     int winSum = window_sum(ar, i, k);
    //     cerr << winSum << endl;
    //     if(sum > winSum){
    //         sum = winSum;
    //         idx = i;
    //     }
    //     cerr << endl << i << " " << sum << endl;
    // }
    cout << idx << endl;

    return 0;
}