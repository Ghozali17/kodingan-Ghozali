#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int samsung();
int oppo();
int iphone();
void beli(string type,int harga);
int riwayat(string type,int jumlah);
int hitung(int jumlah,int harga,string type);
int jumlah_bayar,jumlah_beli,jumlah_dibayar;
int daftar_beli[100];
string tipe_beli[100];
int n=0;
int uang,saldo;
string alamat, nama, umur;

int main(){
	int menu;
	
	cout<<"Masukkan nama anda   :";getline(cin,nama);
	cout<<"Masukkan Alamat anda :";getline(cin,alamat);
	cout<<"Masukkan umur anda   :";cin>>umur;
	cout<<"Masukkan saldo anda  :";cin>>uang;
	saldo=uang;
	system ("cls");
	
	
	do{
		system ("cls");
		cout<<"========================================================================================================================\n";
		cout<<"==============================================| SEJAHTERA CENTER CELL |=================================================\n";
		cout<<"========================================================================================================================\n";
		cout<<endl;
		cout<<"						 SELAMAT DATANG			   			"<<endl;
		cout<< " 				     	<<<<<<<<<<------------->>>>>>>>				"<<endl;
		cout<<endl;
		cout<<"Ada yang bisa kami bantu?"<<endl;
		cout<<"# Ketik [1/2/3]  untuk melakukan transaksi pemebelian handphone!!! #"<<endl;
		cout<<endl;
		cout<<" ---------------------------------------------------------------"<<endl;
		cout<<"| [1] Pembelian							| "<<endl;
		cout<<"| [2] Daftar Transaksi						| "<<endl;
		cout<<"| [3] Pembayaran						| "<<endl;
		cout<<"| [4] Profil pembuat program					|"<<endl;
		cout<<"| [5] Exit							|"<<endl;
		cout<<" ----------------------------------------------------------------"<<endl;
		cout<<" Masukkan Pilihan Anda :";
		cin>>menu;
		
		switch(menu){
			case 1:
			//Menu Pembelian
				int hp;
				system ("cls");
				cout<<"========================================================================================================================\n";
				cout<<"==============================================| SEJAHTERA CENTER CELL |=================================================\n";
				cout<<"========================================================================================================================\n";
				cout<<endl;	
				cout<<"Menu HP : "<<endl;
				cout<<" Pilihan HP yang tersedia di TOKO"<<endl;
				cout<<"1. Samsung "<<endl;
				cout<<"2. Oppo"<<endl;
				cout<<"3. Iphone"<<endl;
				cout<<endl;
				cout<<"Masukan Pilihan Yang Anda inginkan (1/2/3) :"; 
				cin>>hp;
				switch(hp){
					case 1:
						samsung();
					break;
					case 2:
						oppo();
					break;
					case 3:
						iphone();
					break;
					
					default:
					system ("cls");	
					cout<<"Pilihan Tidak Ada"<<endl;
					
				}
				getch ();
	
			break;
			
			case 2:
				system ("cls");	
				cout<<"=======================================================================================================================\n";
				cout<<"=============================================| SEJAHTERA CENTER CELL |=================================================\n";
				cout<<"=======================================================================================================================\n";
				cout<<endl;
				cout<<"	-----------------------------------------> Daftar Transaksi <------------------------------------------"<<endl;
				cout<<endl;
				cout<<" -- Dibawah ini List HP yang anda pilih --" <<endl;
				for(int i=0;i<n;i++){
					cout<<"Nama               :"<<nama<<endl;
					cout<<"Alamat             :"<<alamat<<endl;
					cout<<"Umur               :"<<umur<<" tahun"<<endl;
					cout<<"Tipe HP            :" <<tipe_beli[i]<<endl;
					cout<<"Jumlah yang dibeli :"<<daftar_beli[i]<< " buah "<<endl;
					cout<<endl;
				}
				cout<<"*******************************************"<<endl;
			    cout<<"NEXT------> Silahkan Liat Pembayaran"<<endl;
				
				getch ();
			
			break;
			
			case 3:
				system ("cls");	
				cout<<"==========================================================================================\n";
				cout<<"====================================| SEJAHTERA CENTER CELL |=============================\n";
				cout<<"==========================================================================================\n";
				cout<<endl;
				cout<<">>>>>>> Pembayaran <<<<<<<<"<<endl;				
				cout<<"Jumlah HP yang dibeli   : "<<jumlah_beli<<endl;
				cout<<"Total yang harus dibayar: Rp."<<jumlah_bayar<<endl;
				cout<<"Anda bayar sebesar : Rp."<<saldo<<endl;
				cout<<"Sisa saldo         : Rp."<<uang<<endl;
				
				getch();
			break;
			
			case 4:
				system ("cls");	
				cout<<" Profil pembuat program"<<endl;
				cout<<endl;
				cout<< "Nama  : Ikhsan Saputra"<<endl;
				cout<< "Kelas : B"<<endl;
				cout<< "Npm   : 2117051037"<<endl;
				cout<<endl;
				cout<< "Nama  : Siti Ayuni"<<endl;
				cout<< "Kelas : B"<<endl;
				cout<< "Npm   : 2117051068"<<endl;
				cout<<endl;
				cout<< "Nama  : Pramudhiyo Arsa Sasongko"<<endl;
				cout<< "Kelas : B"<<endl;
				cout<< "Npm   : 2117051063"<<endl;
				cout<<endl;
				
				getch();
			break;
			
			case 5:
				system ("cls");	
				cout<<"=========================================\n";
				cout<<"========| SEJAHTERA CENTER CELL |========\n";
				cout<<"=========================================\n";
				cout<<endl;
				cout<<" TERIMA KASIH TELAH MEMBELI HP DI SEJAHTERA CELL"<<endl;
			return 0;
			break;
			
		
			default:
				system ("cls");	
				cout<<"Pilihan Tidak Ada"<<endl;
		
		}
	}while(menu==1 || menu <=5);
}

int samsung(){
	int tipe;
	int harga;
	string type;
	
	system ("cls");
	cout<<"=========================================\n";
	cout<<"========| SEJAHTERA CENTER CELL |========\n";
	cout<<"=========================================\n";
	cout<<endl;	
	cout<<" Tipe HP Samsung"<<endl;
	cout<<"1. Galaxy A21s"<<endl;
	cout<<"2. Galaxy A72"<<endl;
	cout<<"3. Galaxy S21"<<endl;
	cout<<"Masukkan Tipe [1/2/3] :";
	cin>>tipe;
	switch (tipe){
		case 1:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"	Samsung Galaxy A21s"<<endl;
			cout<<"	Harga :Rp.1.000.000"<<endl;	
			cout<<" ********************************* "<<endl;
			type="Samsung Galaxy A21s";
			harga=1000000;
			beli(type,harga);
		break;
		
		case 2:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"Samsung Galaxy a72"<<endl;
			cout<<"Harga :Rp.2.000.000"<<endl;
			cout<<" ********************************* "<<endl;
			type="Samsung Galaxy A72";
			harga=2000000;
			beli(type,harga);
		break;
		
		case 3:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"Samsung Galaxy S21"<<endl;
			cout<<"Harga :Rp.3.000.000"<<endl;
			cout<<" ********************************* "<<endl;
			type="Samsung Galaxy S21";
			harga=3000000;
			beli(type,harga);
		break;
		
		default:
			system ("cls");	
			cout<<"Pilihan Tidak Ada"<<endl;
		
	}
}

int oppo(){
	int tipe;
	int harga;
	string type;
	system ("cls");
	cout<<"=========================================\n";
	cout<<"========| SEJAHTERA CENTER CELL |========\n";
	cout<<"=========================================\n";
	cout<<endl;	
	cout<<" HP Oppo"<<endl;
	cout<<"1. Reno 4 pro"<<endl;
	cout<<"2. Reno 5 pro"<<endl;
	cout<<"3. Reno 6 pro"<<endl;
	cout<<"Masukkan Tipe :";
	cin>>tipe;
	switch (tipe){
		case 1:
			system ("cls");
			cout<<" ********************************* "<<endl;	
			cout<<"Oppo Reno 4 pro"<<endl;
			cout<<"Harga :Rp.2.500.000"<<endl;
			cout<<" ********************************* "<<endl;
			type="Oppo Reno 4 pro";
			harga=2500000;
			beli(type,harga);
		break;
		
		case 2:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"Oppo Reno 5 pro"<<endl;
			cout<<"Harga :Rp.3.500.000"<<endl;
			cout<<" ********************************* "<<endl;
			type="Oppo Reno 5 pro";
			harga=3500000;
			beli(type,harga);
		break;
		
		case 3:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"Oppo Reno 6 pro"<<endl;
			cout<<"Harga :Rp.4.500.000"<<endl;
			cout<<" ********************************* "<<endl;
			type="Oppo Reno 6 pro";
			harga=4500000;
			beli(type,harga);
		break;
		
		default:
			system ("cls");	
			cout<<"Pilihan Tidak Ada"<<endl;
	}
}

int iphone(){
	string type;
	int tipe;
	int harga;
	system ("cls");
	cout<<"=========================================\n";
	cout<<"========| SEJAHTERA CENTER CELL |========\n";
	cout<<"=========================================\n";
	cout<<endl;	
	cout<<" HP Iphone"<<endl;
	cout<<"1. iphone 11 pro max"<<endl;
	cout<<"2. iphone 12 pro max"<<endl;
	cout<<"3. iphone 13 pro max"<<endl;
	cout<<"Masukkan Tipe:";
	cin>>tipe;
	switch (tipe){
		case 1:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"iphone 11 pro max"<<endl;
			cout<<"Harga :Rp.10.000.000"<<endl;
			cout<<" ********************************* "<<endl;
			type="iphone 11 pro max";
			harga=10000000;
			beli(type, harga);
		break;
		
		case 2:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"iphone 12 pro max"<<endl;
			cout<<"Harga :Rp.11.000.000"<<endl;	
			cout<<" ********************************* "<<endl;
			type="iphone 12 pro max";
			harga=11000000;
			beli(type,harga);
		break;
		
		case 3:
			system ("cls");	
			cout<<" ********************************* "<<endl;
			cout<<"iphone 13 pro max"<<endl;
			cout<<"Harga :Rp.15.000.000"<<endl;
			cout<<" ********************************* "<<endl;
			type="iphone 13 pro max";
			harga=15000000;
			beli(type,harga);
		break;
	
		default:
			system ("cls");	
			cout<<"Pilihan Tidak Ada"<<endl;
	}
}

//fungsi
void beli(string type, int harga){
	string yakin;
	int jumlah;
	cout<<"Apakah anda yakin membeli(Y/T)? ";
	cin>>yakin;
		if(yakin=="y" || yakin=="Y"){
			cout<<"Jumlah yang ingin dibeli: ";
			cin>>jumlah;
			cout<<endl;
			hitung(jumlah,harga,type);
		} 
		else{
			system ("cls");	
			cout<<"Tidak Jadi Membeli"<<endl;
		}
}

// array
int riwayat(string type,int jumlah){
	n=n+1;
	daftar_beli[n-1]=jumlah;
	tipe_beli[n-1]=type;
}

//mesin perhitungan
int hitung(int jumlah,int harga,string type){
		int bayar;
		bayar=jumlah*harga;
		
		if(uang>=bayar){
			jumlah_bayar=jumlah_bayar+bayar;
			jumlah_beli=jumlah_beli+jumlah;
				
			uang=uang-bayar;
			riwayat(type,jumlah);
				
			cout<<"**Selamat pembelian anda berhasil**"<<endl;
			cout<<"~~ Silahkan Cek Pilihan Anda Di daftar transaksi ~~" << endl;
			cout<<"** Pembayaran telah diambil dari saldo anda, silahkan lihat sisa saldo pada menu pembayaran**" << endl;
		}else{
			cout<<"Maaf uang anda tidak cukup, silahkan membeli HP yang lain"<<endl;
		}
	
	}
	
