#include <iostream>
#include <vector>
using namespace std;

int find_m(int N) {
    const int target = 13;
    if (N == target) return 1;

    for (int m = 1; ; ++m) {
        vector<bool> eliminated(N + 1, false); 
        int current = 1;
        int remaining = N;

        eliminated[1] = true;
        remaining--;
        current = 2; 

        while (remaining > 1) {
            int count = 0;
            while (count < m) {
                if (!eliminated[current]) {
                    count++;
                    if (count == m) break;
                }
                current = (current % N) + 1; 
            }

            if (current == target && remaining > 1) {
                break; 
            }

            eliminated[current] = true;
            remaining--;

            while (eliminated[current]) {
                current = (current % N) + 1;
            }
        }

        if (remaining == 1 && !eliminated[target]) {
            return m;
        }
    }
}

int main() {
    int N;
    while (cin >> N && N != 0) {
        cout << find_m(N) << endl;
    }
    return 0;
}