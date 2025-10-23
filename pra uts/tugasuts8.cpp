#include <iostream>
#include <cstring> 

using namespace std;

int main() {
    char str1[50] = "Charles";
    char str2[50] = "Leclerc";
    char hasil[100];

    strcpy(hasil, str1);
    cout << "strcpy(hasil, str1): " << hasil << endl;

    strcat(hasil, " ");
    strcat(hasil, str2);
    cout << "strcat(hasil, str2): " << hasil << endl;

    cout << "strlen(hasil): " << strlen(hasil) << " karakter" << endl;

    char str3[] = "Max";
    if (strcmp(hasil, str3) == 0) {
        cout << "strcmp: 'hasil' dan 'str3' identik." << endl;
    } else {
        cout << "strcmp: 'hasil' dan 'str3' tidak identik." << endl;
    }

    return 0;
}