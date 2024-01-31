#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int h = 0, c = 0;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;

        if(x < 1){
            if(h)
                h--;
            else c++;
        }
        else h+=x;
    }
    cout << c << endl;
}