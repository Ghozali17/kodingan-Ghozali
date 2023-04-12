#include <iostream>  
using namespace std;  
int main() {  
    int nilai = 2;  
    int n;  
    int i;  
    int total = 1;
    cout << " Masukkan bilangan = ";  
    cin >> n;  
    for (i = 1; i <= n; i++) {  
        total = total * nilai;  
    }  
    cout << endl << " Hasil dari " << nilai << " pangkat " << n << " adalah " << total << endl;  
return 0;
} 
