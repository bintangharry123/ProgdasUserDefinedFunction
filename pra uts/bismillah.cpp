#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // untuk format output

using namespace std;

// Struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    double nilai;
};

int main() {
    vector<Mahasiswa> daftar;
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    cin.ignore(); // buang newline dari buffer

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
        Mahasiswa mhs;
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama : ";
        getline(cin, mhs.nama);
        cout << "NIM  : ";
        getline(cin, mhs.nim);
        cout << "Nilai: ";
        cin >> mhs.nilai;
        cin.ignore();

        daftar.push_back(mhs);
    }

    // Hitung rata-rata
    double total = 0;
    for (auto &m : daftar) {
        total += m.nilai;
    }
    double rata = (jumlah > 0) ? total / jumlah : 0;

    // Tampilkan hasil
    cout << "\n=== Daftar Mahasiswa ===\n";
    cout << left << setw(20) << "Nama" 
         << setw(15) << "NIM" 
         << setw(10) << "Nilai" << endl;
    cout << string(45, '-') << endl;

    for (auto &m : daftar) {
        cout << left << setw(20) << m.nama 
             << setw(15) << m.nim 
             << setw(10) << m.nilai << endl;
    }

    cout << "\nRata-rata nilai: " << rata << endl;

    return 0;
}
