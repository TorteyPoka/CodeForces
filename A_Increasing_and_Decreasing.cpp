    /* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
    #include <bits/stdc++.h>
    #define ll long long
    #define int long long

    using namespace std;

    signed main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int T;
        cin >> T;
        while (T--)
        {
            int n, k, p;
            cin >> n >> k >> p;

            if (k <= p || (k-n) < p)
            {
                cout << -1 << endl;
                continue;
            }

            int diff = 1;
            vector<int> v, vDiff;
            int temp = 0;
            v.push_back(n);
            int x = 0;
            int y = k;
            bool f = false;

            for (int i = 0; i < p-2; i++)
            {
                temp += diff;
                if ((k - temp) > n)
                {
                    x = k - temp;
                    vDiff.push_back(y - x);
                    v.push_back(x);
                    y = x;
                }
                diff++;
            }
            vDiff.push_back(y-n);
            v.push_back(k);


            for(int i = 1; i<vDiff.size(); i++)
            {
                if(vDiff[i] <= vDiff[i-1])
                {
                    f = true;
                    break;       
                }
            }

            if (v.size() < p || f)
            {
                cout << -1 << endl;
                continue;
            }

            sort(v.begin(), v.end(), greater<int>());

            for (int i = v.size() - 1; i >= 0; i--)
                cout << v[i] << " ";

            cout << endl;
        }
        return 0;
    }