#include <iostream>
#include <unordered_map>
#include <cmath>

void primeFactors(int n, std::unordered_map<int, int> &factors) {
    int a = 0;
    while (n%2 == 0) {
        a++;
        n /= 2;
    }
    if (a > factors[2]) {
        factors[2] = a;
    }
    for (int i = 3; i*i <= n; i += 2) {
        a = 0;
        while (n%i == 0) {
            a++;
            n /= i;
        }
        if (a > factors[i]) {
            factors[i] = a;
        }
    }
    if (n > 2) {
        factors[n] = 1;
    }
}

int main() {
    int n = 20;
    std::unordered_map<int, int> factors;
    for (int i = 2; i <= n; i++) {
        primeFactors(i, factors);
    }
    long long res = 1;
    for (const auto& factor : factors) {
        std::cout << factor.first << " " << factor.second << std::endl;
        res *= pow(factor.first, factor.second);
    }
    std::cout << res << std::endl;
}