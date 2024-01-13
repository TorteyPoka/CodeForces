#include <iostream>
#include <vector>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

std::vector<int> solve(int t, std::vector<std::pair<int, int>>& test_cases) {
    std::vector<int> results;
    for (int i = 0; i < t; i++) {
        int a = test_cases[i].first;
        int b = test_cases[i].second;
        for (int x = a; x <= b; x++) {
            if (is_prime(x)) {
                results.push_back(x);
                break;
            }
        }
    }
    return results;
}

int main() {
    int t;
    std::cin >> t;
    std::vector<std::pair<int, int>> test_cases(t);
    for (int i = 0; i < t; i++) {
        std::cin >> test_cases[i].first >> test_cases[i].second;
    }
    std::vector<int> results = solve(t, test_cases);
    for (int res : results) {
        std::cout << res << std::endl;
    }
    return 0;
}