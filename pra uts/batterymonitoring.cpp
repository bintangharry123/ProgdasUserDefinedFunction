#include <iostream>
using namespace std;

int main()
  {
    int voltage;

    cout << "Input battery voltage: "<<endl;
    cin >> voltage;
    
    while (voltage > 10){
      cout << "Battery voltage: "<< voltage << "V" <<endl;
      voltage--;


    }
    cout<< "Warning: Low Battery" <<endl;
    return 0;
  }
