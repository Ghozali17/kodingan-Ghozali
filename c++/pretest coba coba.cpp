#include <iostream>
using namespace std;
int main(){
	int HA;
	int harga_diskon;
	//(HA adalah harga awal)
	cin>>HA;
	if((HA>=149000)&&(HA<249000)){
	harga_diskon = HA - (0.1*HA); cout<<"diskon 10%"<<endl;
}else if((HA>=249000)&&(HA<349000)){ harga_diskon = HA - (0.2*HA); cout<<"diskon 20%"<<endl;
}else if((HA>=349000)&&(HA<449000)){ harga_diskon = HA - (0.3*HA); cout<<"diskon 30%"<<endl;	
}else if((HA>=449000)&&(HA<549000)){ harga_diskon = HA - (0.4*HA); cout<<"diskon 40%"<<endl;
}else if((HA>=549000)&&(HA<1000000)){ harga_diskon = HA - (0.5*HA); cout<<"diskon 50%"<<endl;
}else{ harga_diskon = HA;
}
	cout<<"Uang yang harus anda bayar : "<<harga_diskon<<endl;
	return 0;
}
