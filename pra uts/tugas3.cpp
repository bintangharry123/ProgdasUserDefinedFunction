#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int j = 2;
    int k = 3;
    int m = 4;

    cout << "Nilai awal:" << endl;
    cout << "i = " << i << ", j = " << j << ", k = " << k << ", m = " << m << endl << endl;

    i += j + k;  
    cout << "Setelah i += j + k:" << endl;
    cout << "i = " << i << ", j = " << j << ", k = " << k << ", m = " << m << endl << endl;

    j *= m + 5; 
    cout << "Setelah j *= m + 5:" << endl;
    cout << "i = " << i << ", j = " << j << ", k = " << k << ", m = " << m << endl << endl;

    k -= m /= j * 2; 
    cout << "Setelah k -= m /= j * 2:" << endl;
    cout << "i = " << i << ", j = " << j << ", k = " << k << ", m = " << m << endl << endl;

    return 0;
}
