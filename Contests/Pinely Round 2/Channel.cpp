#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    if (t < 1 || t > 500)
    {
        return 0;
    }
    else
    {
        while (t--)
        {
            int n, a, q;
            cin >> n >> a >> q;
            if (n < 1 || n > 100 || a < 0 || a > n || q < 1 || q > 100)
            {
                return 0;
            }
            else
            {
                int count = a;
                int on = a;
                int of = n-a;

                string s;
                cin>>s;

                if (n == a)
                {
                    cout << "YES" << endl;
                    continue;
                }
                for(int i = 0; i<q; i++)
                {
                    if(s[i] == '+')
                    {
                        count++;
                        on++;
                        of--;
                        if(on == n && of == 0)
                        {
                            cout<<"YES"<<endl;
                            break;
                        }
                    }
                    else 
                    {
                        of++;
                        count--;
                    }
                }
                if(of != 0 && on == n)
                {
                    cout<<"MAYBE"<<endl;
                }
                else if (of != 0)
                {
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}