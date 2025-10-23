#include <iostream>
using namespace std;

int main(){

  int angka;
  int genap=0;
  int ganjil=0;

  cout<< "Masukkan angka integer:  ";
  cin>> angka;

 if (angka%2==0){
   cout<< "Angka tersebut genap"<< endl; 
 }
 else{
   cout<< "Angka tersebut ganjil" << endl;  }

cout << "Jumlah bilangan genap dari 1 sampai "<< angka << " adalah: ";
  for(int i=0; i<= angka; i++){
    if (i%2==0){
      cout << i << " ";
      genap += i;
    }   
  }
cout << endl;
cout << "Jumlah bilangan ganjil dari 1 sampai "<< angka << " adalah: ";
  for(int i=0; i<=angka; i++){
    if (i%2!=0){
      cout << i << " ";
      ganjil += i;
    }
  }
    cout << "\n\nJumlah semua angka genap: " << genap;
    cout << "\nJumlah semua angka ganjil: " << ganjil << endl;

return 0;
}