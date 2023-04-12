#include<iostream>
using namespace std;

//Function
void fungsiku () {
	cout<<endl;
	cout<<"		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"		Terimakasih telah mengunjungi Agent Tour VND!"<<endl;
	cout<<"		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
		int main(){
		//Tipe Data & Variabel
		int menu;
		int pil;
		cout<<"			=======================================================================\n";
		cout<<"			======================WELCOME TO OUR TOUR AGENT========================\n";
		cout<<"			=======================================================================\n";
		cout<<endl;
		cout<<"					Apakah Anda ingin jalan jalan bersama kami?"<<endl;
		cout<<"				Kami menyediakan paket liburan yang murah dan lengkap."<<endl;
		cout<<endl;				
		cout<<" 			************************************************************************\n";
		cout<<endl;
			menu:
		//Perulangan
	      do {
	      	 cout<<"-----------------------------------------------------------------------------------"<<endl;
	      	 cout<<"|		Hallo Selamat Datang di Agent Tour VND! 			  |"<<endl;
			 cout<<"|	Ayo kenalan lebih dekat lagi sama Agent Tour kami!		  	  |"<<endl;
			 cout<<"|	[1] About Us 								  |"<<endl;
			 cout<<"|										  |	"<<endl;
			 cout<<"|	Paket - Paket yang tersedia di VND Tour Agent : 		      	  |"<<endl;
	      	 cout<<"|	[2] Cappadocia Its My Dream						  |"<<endl;
			 cout<<"|	[3] Jelajah Turkey							  |"<<endl;
	      	 cout<<"|	[4] Korea Autumn 6 Hari 						  |"<<endl;
			 cout<<"|	[5] Jelajah Korea 10 Hari						  |"<<endl;
	      	 cout<<"|	[6] Explore Europe 10 Hari						  |"<<endl;
			 cout<<"------------------------------------------------------------------------------------"<<endl;
	      	 cout<<endl;
	      	 cout<<"Masukkan pilihan anda (1/2/3/4/5/6) : ";
			 //Input
			 cin>>pil;
		
			}
			 while (pil=='t' || pil=='y');
		 		cout<<"================================"<<endl;
				cout<<"|    Pilihan Tidak Tersedia    |"<<endl;
				cout<<"================================"<<endl;
	
	//Array
	string paket[6] = {"About Us", "Cappadocia Its My Dream", "Jelajah Turkey", "Korea Autumn 6 Days", "Jelajah Korea 10 Hari", "Explore Europe 10 Hari"};
	char pilihan;	  
 	int harga;
 	int bayar;
 	int tambahan;
 	
 	//Percabangan
 	switch (pil){ 
 	m:	case 1 :
 			//About Us
 			system ("cls");
 			paket[0];
 			cout<<"			=================================================================="<<endl;
			cout<<"			||			AGENT TOUR VND				||"<<endl;
			cout<<"			=================================================================="<<endl;
 			cout<<endl;
 			cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
 			cout<<"|| 	VND adalah Tour Agent yang sudah berdiri sejak 2013 yang sudah bersertifikat dan sudah terpercaya.  ||"<<endl;
			cout<<"|| Siap melayani dengan sepenuh hati demi kenyamanan para pelanggan yang telah memilih kami. 		    ||"<<endl;
			cout<<"|| Dengan fasilitas yang terbaik, kami siap memandu perjalanan anda. 				   	    ||"<<endl;
			cout<<"|| 	Kami adalah profesional yang memiliki pengalaman dibidang pariwisata. 		   		    ||"<<endl;
			cout<<"|| Totalitas, Loyalitas dan Integritas adalah modal kami dalam menjalankan usaha ini. 		    	    ||"<<endl;
			cout<<"|| Di tunjang dengan pengalaman yang kami miliki dalam jasa biro perjalanan, 				    ||"<<endl;
			cout<<"|| kami yakin perusahaan kami dapat menjadi mitra perjalanan anda dengan pelayanan yang baik dan memuaskan. ||"<<endl;
			cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<endl;
	 		break;
	 	
	 	case 2:
	 		//Paket Cappadocia Its My Dream
		    system ("cls");
		    paket[1];
			cout<<"================================================================"<<endl;
			cout<<"||		 CAPPADOCIA ITS MY DREAM		      ||"<<endl;
			cout<<"================================================================"<<endl;
			cout<<" HIGHLIGHT: "<<endl;
			cout<<" CAPPADOCIA 	: CROWNE PLAZA *5/MDC CAVE HOTEL"<<endl;
			cout<<" ISTANBUL 	: MERCURE/PULLMAN *5"<<endl;
			cout<<endl;
			cout<<"	     INCLUDE: "<<endl;
			cout<<endl;
			cout<<"1. Tiket Pesawat by Qatar Airways"<<endl;
			cout<<"2. Hotel Bintang 5 "<<endl;
			cout<<"3. Transportasi Bus AC dan Wifi"<<endl;
			cout<<"4. Makan Fullboard "<<endl;
			cout<<"5. Tour & Tiket Masuk Wisata "<<endl;
			cout<<"6. Guide Berbahasa Indonesia "<<endl;
			cout<<endl;
			harga=15000000;
			cout<<"Harga : "<<harga<<endl;
			cout<<endl;
			cout<<"Apakah anda ingin membeli paket ini?"<<endl;
			cout<<"y/n : ";
			cin>>pilihan;
			break;
			
		case 3:
			//Paket Jelajah Turkey
			system ("cls");
			paket[2];
			cout<<"================================================================"<<endl;
			cout<<"||		 JELAJAH TURKI		      ||"<<endl;
			cout<<"================================================================"<<endl;
			cout<<" HIGHLIGHT: "<<endl;
			cout<<" KUSADARI 	: RAMADA/RICHMOND *5 "<<endl;
			cout<<" PAMUKKALE 	: LYCUS RIVER *5"<<endl;
			cout<<endl;
			cout<<"	     INCLUDE: "<<endl;
			cout<<endl;
			cout<<"1. Tiket Pesawat by Qatar Airways"<<endl;
			cout<<"2. Hotel Bintang 5 "<<endl;
			cout<<"3. Transportasi Bus AC dan Wifi"<<endl;
			cout<<"4. Makan Fullboard "<<endl;
			cout<<"5. Tour & Tiket Masuk Wisata "<<endl;
			cout<<"6. Guide Berbahasa Indonesia "<<endl;
			cout<<endl;
			harga=19000000;
			cout<<"Harga : "<<harga<<endl;
			cout<<endl;
			cout<<"Apakah anda ingin membeli paket ini?"<<endl;
			cout<<"y/n : ";
			cin>>pilihan;
			break;
			
		case 4:
			//Paket Korea Autumn 6 Hari
			system ("cls");
			paket[3]; 
			cout<<"================================================================"<<endl;
			cout<<"||		 KOREA AUTUMN 6 DAYS		      ||"<<endl;
			cout<<"================================================================"<<endl;
			cout<<" HIGHLIGHT: "<<endl;
			cout<<" JEJU  : Hallasan Mountain Yeongsil, Manjanggul / WE Hotel JEJU 4*"<<endl;
			cout<<" SEOUL : Gwanghwamun,Seoul N Tower/ LOTTE City Hotel"<<endl;
			cout<<" BUSAN : Oryukdo SkyWalk / BESTIE HOTEL *5"<<endl;
			cout<<endl;
			cout<<"	     INCLUDE: "<<endl;
			cout<<endl;
			cout<<"1. Tiket Pesawat by Qatar Airways"<<endl;
			cout<<"2. Hotel Bintang 5 "<<endl;
			cout<<"3. Transportasi Bus AC dan Wifi"<<endl;
			cout<<"4. Makan Fullboard "<<endl;
			cout<<"5. Tour & Tiket Masuk Wisata "<<endl;
			cout<<"6. Guide Berbahasa Indonesia "<<endl;
			cout<<endl;
			harga=15000000;
			cout<<"Harga : "<<harga<<endl;
			cout<<endl;
			cout<<"Apakah anda ingin membeli paket ini?"<<endl;
			cout<<"y/n : ";
			cin>>pilihan;
			break;
			
		case 5:
			//Paket Jelajah Korea 10 Hari
			system ("cls");
			paket[4];
			cout<<"================================================================"<<endl;
			cout<<"||		 JELAJAH KOREA 10 HARI     ||"<<endl;
			cout<<"================================================================"<<endl;
			cout<<" HIGHLIGHT: "<<endl;
			cout<<" Oryukdo SkyWalk"<<endl;
			cout<<" Jeonjuk Hanok Village"<<endl;
			cout<<" Myeongdong Street"<<endl;
			cout<<" Songwoldong Fairy Tale Village"<<endl;
			cout<<endl;
			cout<<"	     INCLUDE: "<<endl;
			cout<<endl;
			cout<<"1. Tiket Pesawat by Qatar Airways"<<endl;
			cout<<"2. Hotel Bintang 5 "<<endl;
			cout<<"3. Transportasi Bus AC dan Wifi"<<endl;
			cout<<"4. Makan Fullboard "<<endl;
			cout<<"5. Tour & Tiket Masuk Wisata "<<endl;
			cout<<"6. Guide Berbahasa Indonesia "<<endl;
			cout<<endl;
			harga=20000000;
			cout<<"Harga : "<<harga<<endl;
			cout<<endl;
			cout<<"Apakah anda ingin membeli paket ini?"<<endl;
			cout<<"y/n : ";
			cin>>pilihan;
			break;
		
		case 6:
			//Paket Eksplore Europe Selama 10 Hari
			system ("cls");
			paket[5];
			cout<<"================================================================"<<endl;
			cout<<"||		 EKSPLORE EUROPE SELAMA 10 HARI		      ||"<<endl;
			cout<<"================================================================"<<endl;
			cout<<" HIGHLIGHT: "<<endl;
			cout<<" PARIS		: IBIS HOTEL/SETARAF "<<endl;
			cout<<" AMSTERDAM 	: HOLIDAY IN EXPRESS/SETARAF "<<endl;
			cout<<" KOLN	 	: IBIS HOTEL/SETARAF "<<endl;
			cout<<" ISTANBUL 	: IBIS HOTEL/SETARAF "<<endl;
			cout<<" MILAN 		: KLIMA HOTEL/SETARAF "<<endl;
			cout<<endl;
			cout<<"	     INCLUDE: "<<endl;
			cout<<endl;
			cout<<"1. Tiket Pesawat by Qatar Airways"<<endl;
			cout<<"2. Hotel Bintang 5 "<<endl;
			cout<<"3. Transportasi Bus AC dan Wifi"<<endl;
			cout<<"4. Makan Fullboard "<<endl;
			cout<<"5. Tour & Tiket Masuk Wisata "<<endl;
			cout<<"6. Guide Berbahasa Indonesia "<<endl;
			cout<<endl;
			harga=25000000;
			cout<<"Harga : "<<harga<<endl;
			cout<<endl;
			cout<<"Apakah anda ingin membeli paket ini?"<<endl;
			cout<<"y/n : ";
			cin>>pilihan;
			break;
			
		default :
			system("cls");
			cout<<endl;
			cout<<"================================"<<endl;
			cout<<"|    Pilihan Tidak Tersedia    |"<<endl;
			cout<<"================================"<<endl;
			break;
	 }	
		//Percabangan
	 	if(pilihan == 'Y' || pilihan == 'y'){
			k :
			system("cls");
			//Output
	        cout << "Anda memilih 		: "<<paket[pil-1]<<endl;
	        cout << "Dengan Harga 		: Rp. "<<harga<<endl;
	        cout << "Uang Anda 		: Rp. ";
	        cin >> bayar;
		    cout<<endl;    
	        while(bayar < harga) {
	        	//Operator
	        	cout << "Pembayaran kurang sebanyak	: Rp. "<< harga - bayar << endl;
	        	cout << "Masukan saldo tambahan		: Rp. ";
	        	cin >> tambahan;
	        	bayar += tambahan;
	        	
	        	break;
			}
			cout <<endl;
			system("cls");
			cout<<endl;
			cout<<"		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~	 "<<endl;
			cout<<"				BUKTI PEMBAYARAN 		"<<endl;
			cout<<" 		Paket yang dipesan	: "<<paket[pil-1]<<endl;
			cout<<" 		Harga			: "<<harga<<endl;
			cout<<" 		Total Pembayaran 	: "<<bayar<<endl;
			cout<<" 		Kembalian 		: "<<bayar-harga<<endl;
			cout<<"		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~	"<<endl;
			cout<<endl;
			cout<<"		Terimakasih Pembayaran Anda Telah Berhasil"<<endl;
	        fungsiku();
		} else if (pilihan == 'N' || pilihan == 'n'){
			j:
			system("cls");
			cout << "Apakah anda yakin dengan pilihan anda? (y/n) : ";
			cin >> pilihan;
			
			if (pilihan == 'Y' || pilihan == 'y'){
			system("cls");
			fungsiku();
			exit(0);
		} else if (pilihan == 'N' || pilihan == 'n'){
			cout<<"Silakan mengulang pesanan"<<endl;
			goto menu;
		} else {
			cout << "\nPilihan tidak tersedia!"<< endl;
		}
	} 
		return 0;

}

