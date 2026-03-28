#include <iostream>
#include <unordered_map>
#include <cmath>

int largestFactor(int n) {
    int lFactor = 1; // Initialize largest factor to 1
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            lFactor = i;
        }
    }
    return lFactor;
}

std::string reverse(int n) {
    std::string rev = "";
    int reversed = 0;
    while (n > 0) {
        rev += std::to_string(n % 10);
        n /= 10;
        // reversed = reversed * 10 + n % 10;
        // n /= 10;
    }
    return rev;
}

int main() {
    for (int i = 900; i < 1000; i++) {
        std::string num = std::to_string(i) + reverse(i);
        int number = std::stoi(num);
        int factor = largestFactor(number);
        // std::cout << factor << std::endl;
        if (int(log10(factor) + 1) == 3 && int(log10(number/factor) + 1) == 3) {
            std::cout << factor << " " << number/factor << std::endl;
            std::cout << num << std::endl;
        }
    }
    return 0;
}