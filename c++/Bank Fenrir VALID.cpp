#include <iostream>
#include <conio.h>
using namespace std;
void ada(){
int pilih;
long int p,p2,t,r,tf,nabung;
long int transfer,tabungan,s;
char profil[3][100] = {"1.Dimas Habib Rizki","2.Dhiya Ghina Hasri","3.Rizqi Ahmad Ghozali"};
char profil2[3][100] = {"(2217051059)","(2217051134)","(2217051068)"};
string nama;
char ulang = 't';
int c = 0;
int n = 0;
cout<<"\t\t\t\t\t      >>>>>>>>>>|DI|<<<<<<<<<<<";
cout<<endl;
cout<<"\t\t\t\t\t >>>>>>>>>>|BANK FENRIR|<<<<<<<<<<<\t\t"<<endl;
cout<<endl;	
cout<<"Masukkan Nama\t\t: ";
getline(cin,nama);
cout<<"Masukkan No.Rekening\t: ";
cin>>r;
cout<<"Masukkan PIN\t\t: ";
cin>>p;
isi:
cout<<"Masukkan Saldo\t\t: Rp. ";
cin>>s;
			system("cls");
do{
if(s>0){
	system("cls");
	cout<<"========================================================================================================================\n";
	cout<<"============================================== | BANK FENRIR | =========================================================\n";
	cout<<"========================================================================================================================\n";
	cout<<endl;
	cout<<"				    >>>>>>>>>>|SELAMAT DATANG|<<<<<<<<<<													 "<<endl;
	cout<<endl;
	cout<<" 	 __________________________________"<<endl;
	cout<<"	|                          	   |  "<<endl;
	cout<<"	|            Bank Fenrir           |"<<endl;
	cout<<"	|__________________________________|"<<endl;
	cout<<"	|_________ Menu Transaksi _________|"<<endl;
	cout<<"	|                                  |"<<endl;
	cout<<"	|(1) Cek Saldo dan Menabung    	   |"<<endl;
	cout<<"	|(2) Penarikan              	   |"<<endl;
	cout<<"	|(3) Transfer               	   |"<<endl;
	cout<<"	|(4) Data Transaksi	   	   |"<<endl;
	cout<<"	|(5) Profil Pembuat Program	   |"<<endl;
	cout<<"	|(6) Keluar                 	   |"<<endl;
	cout<<"	|__________________________________|"<<endl;
	cout<<"	Pilihan Anda : ";cin>>pilih;
	cout<<endl;
	}else{
	cout<<"========================================================================================================================\n";
	cout<<"============================================== | BANK FENRIR | =========================================================\n";
	cout<<"========================================================================================================================\n";
	cout<<endl;	
		
		cout<<"Saldo Anda Kosong"<<endl;
		cout<<"Silahkan isi saldo terlebih dahulu!"<<endl;
		goto isi;
	}
	system("cls");
	switch(pilih){
		case 1 : 
				system("cls");
				cout<<"========================================================================================================================\n";
				cout<<"============================================== | BANK FENRIR | =========================================================\n";
				cout<<"========================================================================================================================\n";
				cout<<endl;
				cout<<endl;
				cout<<"\t\t\t\t\t>>>>> Menu Cek Saldo <<<<<\t\t\t"<<endl;
				cout<<endl;
				cout<<"Saldo Anda\t: Rp. "<<s<<endl;
				do{
					cout<<"Apakah anda ingin menambahkan saldo?"<<endl;
					cout<<"Jawab (y/t) : ";
					cin>>ulang;
					c++;
					cout<<"Masukkan nominal : ";
					cin>>nabung;
					}while(ulang == 't');
						cout<<"===============================\n";
						cout<<"Berhasil Menambahkan Saldo Anda!"<<endl;
						tabungan = s+nabung;
						cout<<"Saldo Anda : Rp. "<<tabungan<<endl;
						tabungan=tabungan;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"PETUNJUK/t:"<<endl;
				cout<<"Tekan sembarang angka untuk kembali ke menu ";
				getch();
				break;
		case 2 :  	
				system("cls");
				cout<<"========================================================================================================================\n";
				cout<<"============================================== | BANK FENRIR | =========================================================\n";
				cout<<"========================================================================================================================\n";
				cout<<endl;
				cout<<endl;
				cout<<"\t\t\t\t\t>>>>> Menu Penarikan <<<<<\t\t\t\n";
				cout<<"Jumlah Penarikan\t: ";
				cin>>t;
				do{
					cout<<"Apakah anda ingin melakukan penarikan?"<<endl;
					cout<<"Jawab (y/t) : ";
					cin>>ulang;
					c++;
					}while(ulang == 't');
				cout<<"======================="<<endl;
				cout<<"Penarikan Berhasil!"<<endl;
				cout<<"Sisa Saldo Anda\t\t: "<<s-t<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"PETUNJUK :"<<endl;
				cout<<"Tekan sembarang angka untuk kembali ke menu ";
				getch();
				break;
		case 3 : 	
				system("cls");
				cout<<"========================================================================================================================\n";
				cout<<"============================================== | BANK FENRIR | =========================================================\n";
				cout<<"========================================================================================================================\n";
				cout<<endl;
				cout<<endl;
				cout<<"\t\t\t\t\t>>>>> Menu Transfer Uang <<<<<\t\t\t\n";
				cout<<"Nominal Transfer\t: ";cin>>tf;
				awal:
				cout<<"Masukan pin\t: ";cin>>p2;
				if (p==p2){
				do{
					cout<<"Apakah anda yakin ingin melakukan transfer?"<<endl;
					cout<<"Jawab (y/t) : ";
					cin>>ulang;
					c++;
					}while(ulang == 't');
				cout<<"================"<<endl;
				cout<<"Transfer Berhasil!"<<endl;
				transfer = s-tf;
				cout<<"Sisa saldo anda/t: "<<transfer<<endl;
				}else{
					cout<<"Pin yang anda masukkan salah"<<endl;
				cout<<endl;
				goto awal;
				}
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"PETUNJUK :"<<endl;
				cout<<"Tekan sembarang angka untuk kembali ke menu ";
				getch();
				break;
		case 4 : 
				system("cls");
				cout<<"========================================================================================================================\n";
				cout<<"============================================== | BANK FENRIR | =========================================================\n";
				cout<<"========================================================================================================================\n";
				cout<<endl;
				cout<<endl;
				cout<<"Nama\t\t\t: "<<nama<<endl;
				cout<<"No.Rekening\t\t: "<<r<<endl;
				cout<<"Saldo sebelumnya\t: "<<s<<endl;
				cout<<"Saldo setelah menabung\t: "<<tabungan<<endl;
				s=tabungan;
				cout<<endl;
				cout<<"PETUNJUK :"<<endl;
				cout<<"Tekan sembarang angka untuk kembali ke menu ";
				getch();
				break;
		case 5 :
				system("cls");
				cout<<"========================================================================================================================\n";
				cout<<"============================================== | BANK FENRIR | =========================================================\n";
				cout<<"========================================================================================================================\n";
				cout<<endl;
				cout<<endl;
				cout<<">>>>>Profil Pembuat Program<<<<<\n";
				cout<<endl;
				cout<<"|Nama|\t\t\t|NPM|\n";
				cout<<endl;
				for(int i=0; i<3; i++){
					if(i==0||i==1){
					cout<<profil[i]<<"    "<<profil2[i]<<endl;
					}else if(i==2){
					cout<<profil[i]<<"  "<<profil2[i]<<endl;
					
					}cout<<endl;
				}cout<<"Terima Kasih ^_^"<<endl;
				getch();
				break;
		case 6 : 
				system("cls");
				cout<<"========================================================================================================================\n";
				cout<<"============================================== | BANK FENRIR | =========================================================\n";
				cout<<"========================================================================================================================\n";
				cout<<endl;
				cout<<endl;
				cout<<"Terima Kasih sudah bertransaksi disini..... ^_^"<<endl;
					
		default : 
				system("cls");
				cout<<"Anda salah memasukkan pilihan\n";
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"PETUNJUK :"<<endl;
				cout<<"Tekan sembarang angka untuk kembali ke menu ";
				getch();
		}
	}while(pilih>=1 || pilih<=5);

}

int main(){
	cout<<"\t\t\t\t\t>>>>>>>>>>|SELAMAT DATANG|<<<<<<<<<<\t\t"<<endl;	
//manggil void
	ada();
	cout<<endl;
	cout<<" Terima Kasih ";
}
