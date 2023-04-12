#include <iostream>
using namespace std;

int main (){
	double celcius;
	float reamur,fahrenheit,kelvin;
	
	cout << "Celcius : ";
	cout <<endl;
	cin >> celcius;
	
	reamur = 0.8 * celcius;
	fahrenheit = (9.0/5.0 * celcius) + 32;
	kelvin = celcius + 273;
	
	cout << "Reamur : "<< reamur << endl;
	cout << "Fahrenheit : "<< fahrenheit << endl;
	cout << "Kelvin : "<< kelvin << endl;
	
	return 0;
	
}
//Suhu dalam Ruangan
//Surya diberi perintah oleh atasan untuk merubah suhu ruangan yang tadinya dalam Celcius. 
//Bantu Surya untuk membuat program yang bisa merubah suhu dari Celcius menjadi Reamur, 
//Fahrenhait, dan Kelvin.
//Format Input
//Sebuah suhu Celcius dengan tipe Double
//Format Output
//Suhu yang sudah dirubah menjadi Reamur, Fahrenhait, dan Kelvin
//Sample Input
//40
//42
//Sample Output
//Celcius: 40 Celcius: 42
//Reamur: 32 Reamur: 33.6
//Fahrenhait: 104 Fahrenhait: 107.6
//Kelvin: 313 Kelvin: 315
