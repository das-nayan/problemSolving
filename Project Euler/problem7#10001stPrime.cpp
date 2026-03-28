#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n = 100000, count = 0;
    std::vector<int> arr(2*n);

    for (int i = 0; i < 2*n; i++) {
        arr[i] = i;
    }

    arr[0] = arr[1] = 0; // 0 and 1 are not prime

    for (int i = 2; i <= sqrt(2*n); i++) {
        if (arr[i] != 0) {
            for (int j = i*i; j < 2*n; j += i) {
                arr[j] = 0;
            }
        }
    }
    count = 0;
    for (int i = 0; i < 2*n; i++) {
        if (arr[i] != 0) {
            count++;
            if (count == 10001) {
                std::cout << arr[i] << std::endl;
                break;
            }
        }
    }

    return 0;
}
