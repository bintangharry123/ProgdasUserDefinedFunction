#include <iostream>
#include <cstring> // Diperlukan untuk semua fungsi string gaya C

using namespace std;

int main() {
    // --- 1. strlen: Menghitung Panjang String ---
    cout << "## 1. strlen (String Length) ##" << endl;
    char text1[] = "Pemrograman";
    int panjang = strlen(text1); // Menghitung panjang text1
    cout << "String '" << text1 << "' memiliki panjang: " << panjang << " karakter." << endl;
    cout << "-----------------------------------" << endl;


    // --- 2. strcpy: Menyalin String ---
    cout << "\n## 2. strcpy (String Copy) ##" << endl;
    char sumber[] = "Dasar C++";
    char tujuan[20]; // Pastikan ukuran tujuan cukup besar!
    
    strcpy(tujuan, sumber); // Menyalin isi 'sumber' ke 'tujuan'
    
    cout << "Isi string 'sumber': " << sumber << endl;
    cout << "Isi string 'tujuan' setelah disalin: " << tujuan << endl;
    cout << "-----------------------------------" << endl;


    // --- 3. strcat: Menggabungkan String ---
    cout << "\n## 3. strcat (String Concatenate) ##" << endl;
    char kalimat[50] = "Selamat belajar, "; // Pastikan ukuran cukup!
    char nama[] = "Mahasiswa!";
    
    strcat(kalimat, nama); // Menggabungkan 'nama' ke akhir 'kalimat'
    
    cout << "Hasil penggabungan: " << kalimat << endl;
    cout << "-----------------------------------" << endl;


    // --- 4. strcmp: Membandingkan String ---
    cout << "\n## 4. strcmp (String Compare) ##" << endl;
    char pass1[] = "rahasia";
    char pass2[] = "rahasia";
    char pass3[] = "berbeda";

    // Membandingkan pass1 dan pass2 (yang isinya sama)
    if (strcmp(pass1, pass2) == 0) {
        cout << "'" << pass1 << "' dan '" << pass2 << "' -> Sama persis." << endl;
    } else {
        cout << "'" << pass1 << "' dan '" << pass2 << "' -> Berbeda." << endl;
    }

    // Membandingkan pass1 dan pass3 (yang isinya berbeda)
    if (strcmp(pass1, pass3) == 0) {
        cout << "'" << pass1 << "' dan '" << pass3 << "' -> Sama persis." << endl;
    } else {
        cout << "'" << pass1 << "' dan '" << pass3 << "' -> Berbeda." << endl;
    }
    cout << "-----------------------------------" << endl;

    return 0;
}