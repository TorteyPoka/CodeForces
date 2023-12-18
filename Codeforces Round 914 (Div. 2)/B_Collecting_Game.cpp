/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i <n; i++)
            cin>>a[i];

        for(int i = 1; i <= n; i++){
            int count = 0;
            for(int j = 1; j <= n; j++)
            {
                if(a[i] >= a[j]){
                    count++;
                    a[i]+=a[j];
                }
            }
            a[i] = count;
        }

        for(int i = 0; i<n; i++)
            cout << a[i] << " ";
        cout<<endl;

    }
    return 0;
}