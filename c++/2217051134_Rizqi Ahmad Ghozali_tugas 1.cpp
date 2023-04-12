#include <iostream>
using namespace std;
void tukarData(int *a, int *b){
 
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
	int angka[10],m;
	cout<<"Masukkan jumlah Data : ";
	cin>>m;
	for(int i = 0; i<m; i++){
		cout<<"Data Ke "<< i + 1 <<" : ";
		cin>>angka[i];
	}
	
	cout<<"Array sebelum disorting : ";
	for (int i = 0; i < m; i++){
				cout<<angka[i]<<" ";	
	}
	
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(angka[i] < angka[j]){
				tukarData(&angka[i], &angka[j]);
			}
		}
	}cout<<endl;
	
	cout<<"Array setelah disorting : ";
	for (int i = 0; i < m; i++){
				cout<<angka[i]<<" ";
	}
}
