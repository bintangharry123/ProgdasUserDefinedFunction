#include <iostream>

using namespace std;
int main() {
    const int vertikal = 4; 
    const int horizontal = 7; 
    char piramida[vertikal][horizontal];

    for (int i = 0; i < vertikal; ++i) {
        for (int j = 0; j < horizontal; ++j) {
            piramida[i][j] = ' ';
        }
    }

    for (int i = 0; i < vertikal; ++i) {
        int jumlahBintang = 2 * i + 1;
        int posisiAwal = (horizontal - jumlahBintang) / 2;
        for (int j = 0; j < jumlahBintang; ++j) {
            piramida[i][posisiAwal + j] = '*';
        }
    }


    for (int i = 0; i < vertikal; ++i) {
        for (int j = 0; j < horizontal; ++j) {
            cout << piramida[i][j];
        }
        cout << endl;
    }

    return 0;
}