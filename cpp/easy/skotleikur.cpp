#include <iostream>

using namespace std;

int main() {
    int K, a, b;
    cin >> K >> a >> b;

    int count = 0;
    for (int kills = 0; kills * a <= K; ++kills) {
        if ((K - kills * a) % b == 0) {
            ++count;
        }
    }

    cout << count << endl;

    for (int kills = 0; kills * a <= K; ++kills) {
        if ((K - kills * a) % b == 0) {
            int assists = (K - kills * a) / b;
            cout << kills << " " << assists << endl;
        }
    }

    return 0;
}