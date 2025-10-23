#include <iostream>
#include <string>
#include <cstring> 
#include <iomanip> 

using namespace std;

union F1Data {
    char name[50];
    int championships;
    float budgetInMillions;
    char engineSupplierInitial;
};

int main() {

    F1Data items[5];

    strcpy(items[0].name, "Mercedes-AMG Petronas");
    items[1].championships = 6;
    items[2].budgetInMillions = 460.2f;
    items[3].engineSupplierInitial = 'H';
    strcpy(items[4].name, "Scuderia Ferrari");

    cout << "===== Data Tim Formula 1 (Menggunakan Union) =====\n";
    cout << "CATATAN: Perhatikan bagaimana hanya satu baris data per tim yang valid.\n\n";

    for (int i = 0; i < 5; ++i) {
        cout << "Tim " << i + 1 << ":\n";
        cout << "  Nama      : " << items[i].name << "\n";
        cout << "  Gelar Juara: " << items[i].championships << "\n";
        cout << "  Budget    : $" << fixed << setprecision(1) << items[i].budgetInMillions << " Juta\n";
        cout << "  Inisial Mesin: " << items[i].engineSupplierInitial << "\n";
        cout << "------------------------------------\n";
    }

    cout << "\n===== Ukuran Memori (Union F1Data) =====\n";
    cout << "Ukuran total F1Data                 : " << sizeof(F1Data) << " bytes\n";
    cout << "Ukuran member name (char[50])       : " << sizeof(items[0].name) << " bytes\n";
    cout << "Ukuran member championships (int)   : " << sizeof(items[0].championships) << " bytes\n";
    cout << "Ukuran member budget (float)      : " << sizeof(items[0].budgetInMillions) << " bytes\n";
    cout << "Ukuran member engine initial (char): " << sizeof(items[0].engineSupplierInitial) << " bytes\n";

    return 0;
}