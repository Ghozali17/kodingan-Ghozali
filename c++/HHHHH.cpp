#include <iostream>
using namespace std;
int main (){
	
	int z;
	cin>>z;
	if(z%400==0){ 
		cout<<"Tahun Kabisat";
	}else if(z%100==0){ 
		cout<<"Bukan Tahun Kabisat";
	}else if (z%4==0){ 
		cout<<"tahun kabisat";
		
	}else{ 
		cout<<"Bukan Tahun Kabisat";
	}
}

