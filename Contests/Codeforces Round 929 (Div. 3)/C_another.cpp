#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;
        int count =  0;
        for (int d =  1; d * d <= l; d++) {
            if (l % d ==  0) {
                if (l / d % (a * b) ==  0) {
                    count++;
                }
                if (d != l / d && (l / d) % (a * b) ==  0) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return  0;
}
