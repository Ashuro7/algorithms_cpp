/*Implementation Euclid's GCD algorithm in C++*/

#include <iostream>

int euclidGCD(int x, int y) {
    //gcd(x,y) when x | y is y.
    if (x % y == 0) {
        return y;
    }
    else {
    //gcd(x,y) = gcd(x-y,y) when x > y.
        int max = std::max(x, y);
        int min = std::min(x, y);

        return euclidGCD(max-min, min);
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
        std::cout << "Positive integers only;" << std::endl;
    }

    int res = euclidGCD(a, b);
    std::cout << res << std::endl;
}
