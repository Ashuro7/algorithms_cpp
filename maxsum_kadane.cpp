/*Implementation of Kadane's algorithm for max sum in a
contiguous subarray in C++*/

#include <iostream>
#include <vector>
#include <cmath>

int maxSumSubArray(const std::vector<int>& vec) {
    //lMax = local maximum, gMax = global maximum
    /*At each element, we find the maximum sum upto that point, and compare
    if its greater than the global maximum*/
    
    int gMax = 0, lMax = 0;
    for (int i = 0; i < vec.size(); ++i) {
        lMax = std::max(vec[i], lMax + vec[i]);
        gMax = std::max(gMax, lMax);
    }
    return gMax;
}

int main() {
    int n, inp;
    std::cin >> n;

    std::vector<int> nums;

    //Input numbers into vector;
    for (int i = 0; i < n; ++i){
        std::cin >> inp;
        nums.push_back(inp);
    }

    int res = maxSubArray(nums);
    std::cout << res << std::endl;   
}
