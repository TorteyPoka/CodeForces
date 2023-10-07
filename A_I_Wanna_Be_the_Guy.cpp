#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ar[300];
    int n, x, y, count = 0;
    cin>>n>>x;
    for (int i = 0; i < x; i++) 
        cin>>ar[i];
    
    cin>>y;
    int l = x+y;

    for (int j = x; j < l; j++) 
        cin>>ar[j];
    
    sort(ar, ar+l);

    for(int i = 0; i<l; i++)
    {
        if(ar[i] != ar[i+1])
                count++;
    }
    if(n == (count))
        cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}