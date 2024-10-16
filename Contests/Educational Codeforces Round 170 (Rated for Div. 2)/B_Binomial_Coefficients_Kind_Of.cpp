/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

const int MOD = 1e9 + 7;

// int binomialCoeff(int n, int k)
// {
//     if (k > n)
//         return 0;
//     if (k == 0 || k == n)
//         return 1;

//     return (binomialCoeff(n, k - 1) + binomialCoeff(n - 1, k - 1)) % MOD;
// }

int32_t main()
{
    fastIO

        int n;
    cin >> n;
    int nr[n], kr[n];
    for (int &i : nr)
        cin >> i;
    for (int &i : kr)
        cin >> i;

    int C[n + 1][n + 1];
    for (int i = 0; i < n; i++)
    { // loop over n from 0 to N-1 (inclusive)
        C[nr[i]][0] = 1;
        C[nr[i]][nr[i]] = 1;
        for (int k = 1; k < i; k++) // loop over k from 1 to n-1 (inclusive)
            C[nr[i]][kr[k]] = (C[nr[i]][kr[k] - 1] + C[nr[i] - 1][kr[k] - 1]) % MOD;
    }
        
    // for (int n = 0; n < N; n++) { // loop over n from 0 to N-1 (inclusive)
    //     C[n][0] = 1;
    //     C[n][n] = 1;
    //     for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
    //         C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
    // }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << C[i][j] << endl;
        }
    }

    return 0;
}