#include <iostream>
using namespace std;

int main (){
	float r, luas;
	float phi = 3.14;
	
	cout <<"Masukkan jari - jari lingkaran : ";
	cin >> r;
	
	luas = phi*r*r;
	
	cout <<"Luas lingkaran : "<<luas;
	cout << endl;
	
	return 0;
}
//Lingkaran
//Buatlah sebuah program untuk menghitung luas dari lingkaran dengan membuat
//sebuah fungsi.
//Note : Gunakan pi = 3.14 dan jangan lupa menggunakan parameter pada fungsinya
//Format Input
//Sebuah floating-point berupa jari-jari lingkaran
//Format Output
//Sebuah floating-point berupa luas lingkaran
//Constraints
//1 = N = 1000
//Sample Input (Standard Input)
//Sample Output (Standard Output)
//5
//78.5
