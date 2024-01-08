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
        int a, b;
        cin >> a >> b;
        
        if(abs(a-b) % 2)
            cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}