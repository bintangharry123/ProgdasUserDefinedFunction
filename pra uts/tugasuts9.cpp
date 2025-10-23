#include <iostream>
#include <string>

using namespace std;

struct F1Team {
    string name;                  
    int championships;                 
    float budgetInMillions;             
    char engineSupplierInitial;         
};

int main() {
    F1Team teams[5] = {
        {"Mercedes-AMG Petronas", 8, 450.5f, 'M'},
        {"Oracle Red Bull Racing", 6, 400.0f, 'H'},
        {"Scuderia Ferrari", 16, 460.2f, 'F'},
        {"McLaren F1 Team", 8, 380.7f, 'M'},
        {"Aston Martin Aramco", 0, 350.0f, 'M'}
    };

    cout << "===== Data Tim Formula 1 =====\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Tim " << i + 1 << ":\n";
        cout << "  Nama      : " << teams[i].name << "\n";
        cout << "  Gelar Juara: " << teams[i].championships << "\n";
        cout << "  Budget    : $" << teams[i].budgetInMillions << " Juta\n";
        cout << "  Inisial Mesin: " << teams[i].engineSupplierInitial << "\n";
        cout << "------------------------------------\n";
    }

    cout << "\n===== Ukuran Memori (Struct F1Team) =====\n";
    cout << "Ukuran total F1Team               : " << sizeof(F1Team) << " bytes\n";
    cout << "Ukuran member name (string)       : " << sizeof(string) << " bytes\n";
    cout << "Ukuran member championships (int)   : " << sizeof(int) << " bytes\n";
    cout << "Ukuran member budget (float)      : " << sizeof(float) << " bytes\n";
    cout << "Ukuran member engine initial (char): " << sizeof(char) << " bytes\n";

    return 0;
}