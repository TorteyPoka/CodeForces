

#include<bits/stdc++.h>
using namespace std;

int t, n;

int sum_of_digits(int x) {
int sum = 0;
while (x) {
sum += x % 10;
x /= 10;
}
return sum;
}

int main() {
cin >> t;
while (t--) {
cin >> n;
int x = n / 2, y = n - x;
while (abs(sum_of_digits(x) - sum_of_digits(y)) >1) {
    if(sum_of_digits(x) == sum_of_digits(y))
    break;
    else {
        x--;
        y++;
    }
}
cout << x << " " << y << endl;
}
return 0;
}