#include <iostream>

using namespace std;
int main() {
    int baris = 4;
    int angka = 1;

    cout << "Floyd's Triangle:" << endl;
    for (int i = 1; i <= baris; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << angka << " ";
            angka++;
        }
        cout << endl;
    }

    return 0;
}