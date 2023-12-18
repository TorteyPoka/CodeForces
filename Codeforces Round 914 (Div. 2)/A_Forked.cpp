/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        int count = 0;

        int kr[100];
        int qr[100];
        int kc[100];
        int qc[100];
        
        kr[1] = xk + a;
        kr[2] = xk - a;
        kr[3] = yk + a;
        kr[4] = yk - a;
        kc[1] = xk + b;
        kc[2] = xk - b;
        kc[3] = yk + b;
        kc[4] = yk - b;

        qr[1] = xq + a;
        qr[2] = xq - a;
        qr[3] = yq + a;
        qr[4] = yq - a;
        qc[1] = xq + b;
        qc[2] = xq - b;
        qc[3] = yq + b;
        qc[4] = yq - b;

        for(int i = 1; i <= 8; i++){
            if(kr[i] == qr[i]){
                if(kc[i] == qc[i]){
                    count++;
                    cout<<"checked"<<endl;
                }
                cout<<"Checked"<<endl;
            }
        }

        cout<<count<<endl;

        // k[1][1] = xk+a;
        // k[1][2] = xk+b;
        // k[1][3] = yk+a;
        // k[1][4] = yk+b;
        // k[2][1] = xk-a;
        // k[2][2] = xk-b;
        // k[2][3] = yk-a;
        // k[2][4] = yk-b;

        // q[1][1] = xq-a;
        // q[1][2] = xq-b;
        // q[1][3] = yq-a;
        // q[1][4] = yq-b;
        // q[2][1] = xq+a;
        // q[2][2] = xq+b;
        // q[2][3] = yq+a;
        // q[2][4] = yq+b;

        // for(int i = 1; i <= 2; i++)
        // for (int j = 1; j <= 8; j++)
        // {
        //     // cout << k[i][j] << " " << q[i][j] << endl;
        //     if (k[1][j] == q[1][j] && k[2][j] == q[2][j])
        //     {
        //         cout << k[1][j] << " " << q[1][j] << " " << k[2][j] << " " << q[2][j] << endl;
        //         count++;
        //     }
        // }
        // cout << count << endl;
    }
    return 0;
}