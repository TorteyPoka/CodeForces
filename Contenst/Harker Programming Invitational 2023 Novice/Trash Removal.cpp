#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, K, count(0);
    string s;

    cin >> N >> K;

    for(int i=0; i<N; i++)
    {
        cin >> s;
        
        if(s[i] > K)
        {
            count++;
            for(int j=0; i<s[i]; j++)
            {
                if(s[i] > K)
                {
                    count++;
                }
            }

        }
        count++;
    }
}