#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double kecepatanAwal = 50.0; 
    const double gravitasi = 9.8;
    double waktu = 0.0;
    double posisi = 0.0;
    int iterasi = 0;
    double intervalWaktu = 3.0; 

    cout << left << setw(10) << "Iterasi"
              << setw(15) << "Waktu (s)"
              << setw(15) << "Posisi (m)" << endl;
    cout << "---------------------------------------" << endl;


    do {
  
        posisi = (kecepatanAwal * waktu) - (0.5 * gravitasi * waktu * waktu);

  
        cout << left << setw(10) << iterasi
                  << setw(15) << waktu
                  << setw(15) << fixed << setprecision(2) << posisi << endl;

        iterasi++;
        waktu += intervalWaktu;

    } while (posisi > 0 || iterasi == 1);

    return 0;
}