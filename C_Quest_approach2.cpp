/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

int ar1[200000 + 1], ar2[200000 + 1];

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> ar1[i];
        for (int i = 0; i < n; i++)
            cin >> ar2[i];

        vector<int> vSuffSum;
        int startPoint = min(n, k);
        int suffSum = 0;
        for (int i = startPoint - 1; i >= 0; i--)
        {
            suffSum += ar1[i];
            vSuffSum.push_back(suffSum);
        }
        int lastEle = startPoint - 1;
        int totalSum = ar1[0];
        sort(vSuffSum.begin(), vSuffSum.end(), greater<int>());

        for(int i = 0; i<vSuffSum.size(); i++) cout << vSuffSum[i] << " ";
        cout << endl;
        // cout << "k= " << k << " ";
        k-=1;
        // cout << "new k= " << k << endl;
        // cout << "lastEle pos= "<<lastEle<<" "<<totalSum << endl;
        int i = 0;
        while(k > 0)
        {
            cout << "i= " << i << "  & vSuffSum= " << vSuffSum[i+1] << " Multy= " <<ar2[i] * k << endl;
            if (vSuffSum[i+1] > (ar2[i] * k))
            {
                // cout << "Check "<<endl;
                totalSum+=ar1[i];
                k--;
                i++;
            }
            else
            {
                totalSum += ar2[i];
                k--;
                // cout << "Subtracted "<<endl;
                for(int y = i; y<startPoint; y++)
                {
                    vSuffSum[i]-=ar1[lastEle];
                }
                startPoint--;
            }
        }

        cout << totalSum << endl;
    }
    return 0;
}