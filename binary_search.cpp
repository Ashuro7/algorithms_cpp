//Implementation of Binary Search in C++

#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& num, int k) {
    int l = 0, r = (int)num.size(), mid;

    while (l <= r) {
        mid = (l + r)/2;
        if (num[mid] == k) {
            return mid;
        }

        if (num[mid] > k) {
            r = mid - 1;
        }

        if (num[mid] < k) {
            l = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n, inp, key;
    std::vector<int> v;
    
    std::cin >> n; //Number of elements;

    //Input the elements;
    for (int i = 0; i < n; ++i) {
        std::cin >> inp;
        v.push_back(inp);
    }

    std::cin >> key; //Element to search for;

    std::cout << binarySearch(v, key) << std::endl;
}
