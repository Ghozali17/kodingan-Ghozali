#include <iostream>
using namespace std;
   float uts;
   float uas;
   float hasil;
   char huruf_mutu(float uts, float uas){
   		hasil = (uts+uas)/2;
   		cout<<"nilai akhir : "<<hasil;
		cout<<endl;
    
    if(hasil>100 || hasil<0){
    	cout<<"Nilai melebihi range";
	}else if(hasil>=76 && hasil<=100){
        cout<<"A";
        
    }else if(hasil>=71 && hasil<76){
        cout<<"B+";
        
    }else if(hasil>=66 && hasil<71){
        cout<<"B";
        
    }else if(hasil>=61 && hasil<66){
        cout<<"C+";
        
    }else if(hasil>=56 && hasil<61){
        cout<<"C";
        
    }else if(hasil>=50 && hasil<56){
        cout<<"D";
        
    }else if(hasil<0 && hasil>50){
        cout<<"E";
    }
    
    return hasil;  
}

int main(){
	float hasil = huruf_mutu(80.9, 66.5);
}
