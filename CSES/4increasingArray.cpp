#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string a;
    int maxCount = 1, temp = 1;
    cin >> a;
    for (int i=1; i < a.size(); i++) {
        if (a[i] != a[i-1]) {
            if (temp > maxCount)    maxCount = temp;
            temp =1;
        }
        else {
            temp++;
        }
    }
    if (temp > maxCount)    maxCount = temp;
    cout << maxCount << endl;
    return 0;
}