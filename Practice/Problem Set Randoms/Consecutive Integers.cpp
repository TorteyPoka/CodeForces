#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define el '\n'
#define int long long
#define yes cout << "Yes" << el;
#define no cout << "No" << el;
/*----------X----------*//*
    21 - 5
    N = a, a+1, a+2 ...... a+k-1
    first term = a, last term = a + k - 1, terms = k;
    sum = terms * (first + last) / 2;
        = (k/2) * (a + (a + k - 1));
    a = ?

*/
pair<int, int> findSeq(int n) {
    int dN = 2 * n;  
    int maxLen = 1, start = n;  

    for (int i = 1; i * (i - 1) < 2 * n; i++) {
        if (dN % i == 0) {
            int num = dN / i - (i - 1);
            if (num % 2 == 0) {
                int a = num / 2;
                if (a > 0 && i > maxLen) {
                    maxLen = i;
                    start = a;
                }
            }
        }
    }

    return {start, start + maxLen - 1};
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
    int n;
    while(cin >> n and n > -1){
        auto [a, b] = findSeq(n);
        cout << n << " = " << a << " + ... + " << b << el;
    }
    return 0;
}
