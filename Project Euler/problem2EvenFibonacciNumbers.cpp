#include <iostream>

int main() {
    int a = 1, b = 2, c = 0, res = 2;
    while (c<=4000000) {
        c = a+b;
        a = b;
        b = c;
        if (c%2==0) {
            res+=c;
        }
    }
    std::cout << res << std::endl;
}