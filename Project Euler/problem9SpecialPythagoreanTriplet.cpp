#include <iostream>
#include <vector>
#include <cmath>

int main() {
    long res = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0) {
            std::cout << (i*i)/2 << std::endl;
            if (floor((i*i)/2) == ((i*i)/2)) {
                long a = i, b = (i*i)/2 - 1, c = (i*i)/2 + 1;
                if (a + b + c == 1000) {
                    res = a * b * c;
                    // std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
                    // std::cout << res << std::endl;
                }
            }
        }
        else {
            long a = i, b = (i*i - 1)/2, c = (i*i + 1)/2;
            if (a + b + c == 1000) {
                res = a * b * c;
                // std::cout << res << std::endl;
            }
        }
    }
    return 0;
}
