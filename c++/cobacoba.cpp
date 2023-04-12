#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	
	int fisika[10], kimia[10], matematika[10], biologi[10];
	char nama[10][10];
	int banyak_data;
	
	cout << "Masukan banyaknya data : ";
	
	for (int i = 0; i < banyak_data; i++){
		cout << "---------------Welcome to nana coding---------------\n";
		cout << "Data ke - " << i + 1 << endl;
		cout << "---------------Welcome to nana coding---------------\n";
		cout << "Nama Panggilan\t : "; cin >> nama [i];
		cout << "Nama Fisika\t : "; cin >> fisika [i];
		cout << "Nama Matematika\t : "; cin >> matematika [i];
		cout << "Nama Biologi\t : "; cin >> kimia [i];
		
		cout << "------------------------------------------\n";
		cout << setw(4) << "No" << setw(15) <<"Nama"
			 << setw(15) << "Fisika" << setw (20) <<"Matematika"
			 << setw(15) << "Kimia" << setw (15) << "Biologi" << endl;
			 cout << "-------------------------------------\n";
			 for (int i = 0; i < banyak_data; i++){
			 	int no = i + 1;
			 	cout << setw(4) << no << setw(15) << nama[1]
			 	<< setw(13) << fisika[i] << setw(18) << matematika[i]
			 	<< setw(18) << kimia[i] << setw(14) << biologi[i] << endl; 
			 	
			 } 
	}
	
	
	
}
