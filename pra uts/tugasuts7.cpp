#include <iostream>
#include <string> 
using namespace std;

int main() {
    string kalimat = "Lewis";
    cout << "String awal: " << kalimat << endl;

    kalimat.append(" Hamilton");
    cout << "Setelah append(): " << kalimat << endl;

    cout << "Panjang string: " << kalimat.length() << " karakter" <<endl;

    string sub = kalimat.substr(12, 5);
    cout << "Substring(12, 5): " << sub << endl;

    size_t posisi = kalimat.find("Hamilton");
    if (posisi != string::npos) { 
        cout << "'Hamilton' ditemukan pada indeks: " << posisi << endl;
    } else {
        cout << "'Hamilton' tidak ditemukan." << endl;
    }

    kalimat.insert(0, "Sir ");
    cout << "Setelah insert(): " << kalimat << endl;

    return 0;
}