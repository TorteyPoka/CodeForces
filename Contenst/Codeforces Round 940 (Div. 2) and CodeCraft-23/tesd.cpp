#include <iostream>
#include <vector>

void solve(int t, std::vector<std::pair<int, int>>& test_cases) {
    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first;
        int k = test_cases[i].second;
        // Calculate the largest possible number that can be added to the sequence
        // without exceeding k. If k is not divisible by n, add an additional 1.
        int largest_number = k / n;
        if (k % n != 0) {
            largest_number += 1;
        }
        // Construct the sequence with the largest possible number repeated n times
        std::vector<int> sequence(n, largest_number);
        // Print the sequence
        for (int num : sequence) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;
    std::vector<std::pair<int, int>> test_cases(t);
    for (int i = 0; i < t; ++i) {
        std::cin >> test_cases[i].first >> test_cases[i].second;
    }
    solve(t, test_cases);
    return 0;
}
