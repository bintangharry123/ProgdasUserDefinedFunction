#include <iostream>

using namespace std;
int main() {

    int deretTurun[7];
    int nilaiAwal = 3;


    for (int i = 0; i < 7; ++i) {
        deretTurun[i] = nilaiAwal;
        nilaiAwal--; 
    }

    cout << "Deret Angka: ";
    for (int i = 0; i < 7; ++i) {
        cout << deretTurun[i] << " ";
    }
    cout << endl;

    return 0;
}