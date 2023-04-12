#include <iostream>
using namespace std;

int main(){
	double c, r, k, f;
	cout<<"konversi suhu"<<endl;
	cout<<"masukkan suhu celcius : "; cin>>c;
	r = c * 4 / 5;
	k = c + 273;
	f = (c * 9 / 5) + 32;
	cout<<c<<" derajat celcius = "<<endl;
	cout<<r<<" derajat reamur "<<endl;
	cout<<k<<" derajat kelvin "<<endl;
	cout<<f<<" derajat fahrenheit "<<endl;
}
