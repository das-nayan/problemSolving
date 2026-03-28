#include <iostream>
#include <unordered_map>
#include <cmath>

long long primeFactors(long long n) {
    long long res = 2;
    while (n%2 == 0) {
        n /= 2;
    }
    for (int i = 3; i*i <= n; i += 2) {
        while (n%i == 0) {
            n /= i;
            if (i > res) {
                res = i;
            }
        }
    }
    if (n > res) {
        res = n;
    }
    return res;
}

int main() {
    long long n = 600851475143;
    int a = 13195;
    std::cout << primeFactors(n) << std::endl;
    return 0;
}