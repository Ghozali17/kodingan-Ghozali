

#include <iostream>
using namespace std;
main(){
  int Nilai[20];
  int Posisi[20];
  int i, N, Bilangan, Banyak=0;
  bool ketemu;
  cout<<"Masukkan Banyaknya Bilangan = ";
  cin>>N;
  cout<<endl;
  
  for(i=0; i<N; i++)
  {
    cout<<"Masukkan elemen ke-"<<i<<" = ";
    cin>>Nilai[i];
  }
  
  cout<<"\n\nDeretan Bilangan = ";
  for(i=0; i<N; i++)
    cout<<Nilai[i]<<" ";
  
  cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
  cin>>Bilangan;
  
  for(i=0; i<N; i++)
  {
    if(Nilai[i]==Bilangan)
    {
      ketemu = true;
      Posisi[Banyak]=i;
      Banyak++;
    }
  }
  if(ketemu)
  {
    cout<<"Bilangan "<<Bilangan<<" ditemukan sebanyak "<<Banyak;
    cout<<"\npada posisi ke = ";
    for(i=0; i<Banyak; i++)
      cout<<Posisi[i]<<" ";
  }
  else
    cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
}


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
