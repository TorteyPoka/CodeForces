/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
//232481191	Nov/12/2023	TorteyPoka	629A - Far Relative’s Birthday Cake	GNU C++20 (64)	Accepted	15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    char c;
    char matrix[n + 1][n + 1];
    int row[100], col[100];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c;
            matrix[i][j] = c;
        }
    }
    int rw;
    int cl;
    for (int i = 1; i <= n; i++)
    {
        rw = 0;
        cl = 0;
        for (int j = 1; j <= n; j++)
        {
            if (matrix[i][j] == 'C')
                rw++;
            if (matrix[j][i] == 'C')
                cl++;
        }
        row[i] = (rw*(rw-1))/2;
        col[i] = (cl*(cl-1))/2;
    } 
    int val = 0;
    for(int i = 1; i<=n; i++)
        val+=(row[i]+col[i]);

    cout<<val;

    return 0;
}