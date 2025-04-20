#include <iostream>
using namespace std;

long long xor_upto(long long n) {
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}
long long f(long long A, long long B) {
    return xor_upto(B) ^ xor_upto(A - 1);
}

int main() {
    long long A, B;
    cin >> A >> B;
    cout << f(A, B) << endl;
    return 0;
}
