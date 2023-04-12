#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int fisika[10], kimia[10], matematika[10], biologi[10];
	char nama[10][10];
	int banyak_data;
	
	cout << "Masukan Banyak Data : ";
	cin >> banyak_data;
	
	for (int i =0; i<banyak_data; i++){
		cout << "---------------------------------\n";
		cout << "Data ke - "  << i + 1 << endl;
		cout << "---------------------------------\n";
		cout << "Nama Panggilan\t :"; cin>>nama[i];
		cout << "Nilai Fisika\t :"; cin>>fisika[i];
		cout << "Nilai Matematika :"; cin>>matematika[i];
		cout << "Nilai Kimia\t :"; cin>>kimia[i];
		cout << "Nilai Biologi\t :"; cin>>biologi[i];
	}
	cout<<"----------------------------------------------------------\n";
	cout<<setw(4) << "No" << setw(15) << "Nama"
		<<setw(15) << "Fisika" << setw(20) << "Matematika"
		<<setw(15) << "kimia" << setw(15) << "Biologi" << endl;
	cout<<"----------------------------------------------------------\n";
	
	for (int i=0; i<banyak_data; i++){
		int no = i + 1;
		cout<<setw(4) << no << setw(15) << nama[i]
		<<setw(13) << fisika[i] << setw(18) << matematika[i]
		<<setw(18) << kimia[i] << setw(14) << biologi[i] << endl;
		
	}		
}
