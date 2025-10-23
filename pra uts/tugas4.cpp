#include <iostream>
using namespace std;

int main() {
    int maxNum;
    cout << "Masukkan angka tertinggi: ";
    cin >> maxNum;

    int angka = 1; // mulai dari 1
    int baris = 1;

    while (angka <= maxNum) {
        for (int j = 1; j <= baris && angka <= maxNum; j++) {
            cout << angka << " ";
            angka++;
        }
        cout << endl;
        baris++;
    }

    return 0;
}
