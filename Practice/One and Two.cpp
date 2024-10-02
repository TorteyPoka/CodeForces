//Solved by : Sakhawat Hossain Mahin (Mahin)
//ID: 213071026

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int l(0), r(n - 1), k(-1);
        while (l < r) {
            int start = 1, end = 1;
            for (int i = l; i <= (l + r) / 2; i++) {
                start *= a[i];
            }
            for (int i = (l + r) / 2 + 1; i <= r; i++) {
                end *= a[i];
            }
            if (start == end) {
                k = ((l + r) / 2 + 1)-1;
                break;
            }
            l++;
            r--;
        }
        cout << k << endl;
    }
    return 0;
}
