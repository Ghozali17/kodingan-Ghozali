// tugas no 4

#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int p = 0; p < x; p++){
    	for(int q = x; q > p; q--){ cout<<" ";
    }
    for(int R = 1; R <= (2*p -1); R++){
	cout<<"*";
    }
    cout<<endl;
    }
    
}


// tugas no 5

#include <iostream>  
using namespace std;  
int main(){  
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


// tugas no 6

#include <iostream>
using namespace std;
int main(){
	string a, b, c, d;
	cout<<" Nama        : " <<endl;
	cout<<" Kelas       : " <<endl;
	cout<<" Kelompok    : " <<endl;
	cout<<" Alamat      : " <<endl;
	for(int i = 0; i < 2; i++){
    printf("Perulangan ke-%i\n", i);
}
return 0;
}
