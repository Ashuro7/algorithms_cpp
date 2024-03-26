/*Implementation of binary exponentiation in C++*/

#include <iostream>

int binary_exponentiation(int num, int pow){
    int res = 1;
    while (pow) {
        if (pow & 1) 
            res = res * num;

        num = num * num;
        pow >>= 1;
    }    
    return res;
}

int main() {
    int a, b;
    //a = number, b = power
    std::cin >> a >> b;
    if (a == 0 && b == 0) {
        std::cout << "Undefined;" << std::endl;
    }
    else if (b < 0) {
        std::cout << "The power cannot be negative;" << std::endl;
    }
    else {
        int result = binary_exponentiation(a, b);
        std::cout << result << std::endl;
    }
    
}
