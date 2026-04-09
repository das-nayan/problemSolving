#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n = 0;
    cin >> n;
    if (n == 1) cout << "1" << endl;
    else if (n == 2 || n == 3)   cout << "NO SOLUTION" << endl;
    else if (n == 4)    cout << "2 4 1 3" << endl;
    else {
        int a = 0, b = 0;
        if (n%2 == 0) {
            for (int i = 1; i < n; i += 2)  cout << i << " ";
            for (int i = 2; i <= n; i += 2) cout << i << " ";
        }
        else {
            for (int i = 1; i <= n; i += 2)  cout << i << " ";
            for (int i = 2; i < n; i += 2) cout << i << " ";
        }
        cout << " " << "\n";
    }
    return 0;
}