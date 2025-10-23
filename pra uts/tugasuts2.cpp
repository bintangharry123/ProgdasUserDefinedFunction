#include <iostream>

using namespace std;
int main() {
    int deretGanjil[11];
    int nilaiAwal = 3;

    for (int i = 0; i < 11; ++i) {
        deretGanjil[i] = nilaiAwal;
        nilaiAwal += 2; 
    }

    cout << "Deret Angka: ";
    for (int i = 0; i < 11; ++i) {
        cout << deretGanjil[i] << " ";
    }
    cout << endl;

    return 0;
}