/*Implementation of powerset (all subsets) generation in C++*/

#include <iostream>
#include <vector>

std::vector<int> subsets;

void powerSet(const std::vector<int>& vec, int idx, int n) {
    if (idx == n) {
        for (int i = 0; i < subsets.size(); ++i) {
            std::cout << subsets[i] << " ";
        }
        std::cout << std::endl;
    }
    else {
        subsets.push_back(vec[idx]);
        powerSet(vec, idx + 1, n);
        subsets.pop_back();
        powerSet(vec, idx + 1, n);
    }
}

int main() {
    int n, inp;
    std::cin >> n;

    std::vector<int> nums;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> inp;
        nums.push_back(inp);
    }

    powerSet(nums, 0, n);
    
}
