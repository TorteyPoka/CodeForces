#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;

    cin>>t;

    while(t--)
    {
        double a,b,c;
        cin>>a>>b>>c;

        double n = max(a,b);

        for(int i = 0; i < n; i++)
        {
            if(a == b)
            {
                cout<< i << endl;
                break;
            }
            else if(c > a && c > b)
            {
                if(a > b)
                {
                    double k = a - b;
                    a -= k;
                    b += k;
                    cout<< i+1 << endl;
                    break;
                }
                else if(b > a)
                {
                    double k = b - a / 2;
                    b -= k;
                    a += k;
                    cout << i+1 << endl;
                    break;
                }
            }
            else{
                if(a > b)
                {
                    a -= c;
                    b += c;
                    if(a < b)
                    {
                        cout<< i+1 << endl;
                        break;
                    }
                }
                else if(b > a)
                {
                    b -= c;
                    a += c;
                    if(b < a) 
                    {
                        cout<< i+1 << endl;
                        break;
                    }
                }
                else if (a==b){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
