#include<iostream>
using namespace std;
	int main(){
		float detik;
		float jam;
		float menit;
		
		cin >> detik;
		
		jam = (detik / 3600);
		menit = (detik / 60);
		cout << jam << " Jam atau " << menit << " Menit";
		
		return 0;
	}
