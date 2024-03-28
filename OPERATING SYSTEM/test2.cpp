/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

void bestFit(int *blockSize, int m, int *processSize, int n)
{
    vector<int> aloc(n + 1, -1);

    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int minDx = -1;
        for (int j = 0; j < m; j++)
        {
            if (blockSize[j] >= processSize[i] && blockSize[j] < min)
            {
                min = blockSize[j];
                minDx = j;
            }
        }
        if (minDx != -1)
        {
            aloc[i] = minDx + 1;
            blockSize[minDx] -= processSize[i];
        }
    }

    cout << "Process No. \t Process Size \t Block No." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t\t" << processSize[i] << "\t\t";
        if (aloc[i] != -1)
            cout << aloc[i];
        else
            cout << "Not Allocated";
        cout << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    int m = sizeof(blockSize) / sizeof(blockSize[0]);
    int n = sizeof(processSize) / sizeof(processSize[0]);

    bestFit(blockSize, m, processSize, n);

    return 0;
}