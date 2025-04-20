#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    long long test;
    std::cin >> test;
    while (test--) {
        long long n;
        std::cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        set<long long>s;
        ll Min = arr[0];
        ll cnt = 0;
        for (int i = 1; i < n; i++){
            if (arr[i] == Min) cnt++;
            if (arr[i] % Min == 0) s.insert(arr[i]);
            if(cnt > 1) break;
        }
        bool flag=false;
        if(s.size()>1)
            for (int i = 1; i < s.size(); i++)
            {
                if(Min == __gcd(*next(s.begin(), i),*next(s.begin(), i-1))){
                    cerr << *next(s.begin(), i) << " " << *next(s.begin(), i-1);
                    flag = true;
                    break;
                }
            }
        if (flag or cnt > 1  ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}