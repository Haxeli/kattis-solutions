#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    while (cin >> a >> b) {
        if(a >= b) {
            cout << std::abs(a - b) << endl;
        } else {
            cout << std::abs(b - a) << endl;
        }
    }
    return 0;
}