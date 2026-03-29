#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n = 0;
    long count = 0;
    cin >> n;
    int array[n];
    for (int i=0; i < n; i++)   cin >> array[i];
    bool flag = true; 
    for (int i=1; i<n; i++) {
        if (array[i] < array[i-1]) {
            long diff = array[i-1] - array[i];
            array[i] = array[i] + diff;
            count += diff;
        }
    }
    cout << count << "\n";
    return 0;
}