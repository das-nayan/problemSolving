#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    long long n, k, sum = 0;
    if (cin >> n) {
        for (int i = 0; i < n - 1; ++i) {
            if (cin >> k) {
                sum += k;
            }
        }
        cout << n * (n + 1) / 2 - sum << endl;
    }
    return 0;
}