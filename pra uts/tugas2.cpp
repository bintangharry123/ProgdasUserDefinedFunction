#include <iostream>
using namespace std;

int main(){
  int formula1;
  string rb[]         = {"Max Verstappen", "Yuki Tsunoda"};        
  string mclaren[]    = {"Oscar Piastri", "Lando Norris"};        
  string ferrari[]    = {"Charles Leclerc", "Lewis Hamilton"};    
  string mercedes[]   = {"George Russell", "Kimi Antonelli"};      
  string astonmartin[] = {"Lance Stroll", "Fernando Alonso"};     
  string alpine[]     = {"Pierre Gasly", "Franco Colapinto"};     
  string williams[]   = {"Alexander Albon", "Carlos Sainz"};      
  string haas[]       = {"Esteban Ocon", "Oliver Bearman"};       
  string racingbulls[] = {"Liam Lawson", "Isack Hadjar"};         
  string kicksauber[] = {"Nico Hulkenberg", "Gabriel Bortoleto"};



  cout << "--PILIH TEAM FORMULA 1--"<<endl;
  cout << "1. Redbull Racing"<<endl;
  cout << "2. McLaren"<<endl;
  cout << "3. Ferrari"<< endl;
  cout << "4. Mercedes"<<endl;
  cout << "5. Aston Martin"<<endl;
  cout << "6. Alpine"<< endl;
  cout << "7. Williams Racing"<<endl;
  cout << "8. Haas"<<endl;
  cout << "9. Racing Bulls"<<endl;
  cout << "10. Kick Sauber"<<endl;
  cout << "Pilih Team (Ketik Angka): ";
  cin >> formula1;
  cout << endl;

  switch (formula1){
    case 1:
    cout << "Team yang dipilih adalah Redbull Racing"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< rb[i]<<endl;
    }
    break;

    case 2:
    cout << "Team yang dipilih adalah McLaren"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< mclaren[i]<<endl;
    }
    break;
    
    case 3:
    cout << "Team yang dipilih adalah Ferrari"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< ferrari[i]<<endl;
    }
    break;

    case 4:
    cout << "Team yang dipilih adalah Mercedes"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< mercedes[i]<<endl;
    }
    break;

    case 5:
    cout << "Team yang dipilih adalah Aston Martin"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< astonmartin[i]<<endl;
    }
    break;

    case 6:
    cout << "Team yang dipilih adalah Alpine"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< alpine[i]<<endl;
    }
    break;

    case 7:
    cout << "Team yang dipilih adalah Williams Racing"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< williams[i]<<endl;
    }
    break;

    case 8:
    cout << "Team yang dipilih adalah Haas"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< haas[i]<<endl;
    }
    break;

    case 9:
    cout << "Team yang dipilih adalah Racing Bulls"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< racingbulls[i]<<endl;
    }
    break;

    case 10:
    cout << "Team yang dipilih adalah Kick Sauber"<<endl;
    cout << "Nama Driver: "<<endl;
    for (int i=0; i<2; i++){
      cout << "-> "<< kicksauber[i]<<endl;
    }
    break;

    default:
    cout << "errorr!"<<endl;
    break;
  }
  
return 0;
}