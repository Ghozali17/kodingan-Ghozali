#include <iostream>
using namespace std;
int main() {
    int babil, bil[100], cari;
    
    cout << "Masukkan banyaknya bilangan = ";
    cin >> babil;
    cout << endl;
    
    for(int a = 0; a < babil; a++){
        cout << "Masukkan elemen ke-" << a << " = ";
        cin >> bil[a];
        cout << endl;}
        
    cout << endl;   
    cout << endl;
    cout << "Deretan Bilangan = ";
    for(int b = 0; b < babil; b++){
        cout << bil[b] << " ";}
    cout << endl;
    
    cout << "Masukkan bilangan yang dicari = ";
    cin >> cari;
    
    for(int c = 0; c < babil; c++){
     if(cari == bil[c]){
         cout << " Bilangan " << bil[c] << " ditemukan sebanyak " << c;
         break;
     }else {
         cout << "Bilangan tersebut tidak ditemukan";
         break;}} 
    
    return 0;
}
