#include <iostream>
using namespace std;
void tukarData(int *x, int *y){
 
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
	int nominal[10],m;
	cout<<"jumlah Data yang ingin anda masukan : ";
	cin>>m;
	
	
	for(int i = 0; i<m; i++){
		cout<<"Data Ke "<< i + 1 <<" : ";
		cin>>nominal[i];
	}
	
	cout<<"sebelum disorting : ";
	for (int i = 0; i < m; i++){
				cout<<nominal[i]<<" ";	
	}
	
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(nominal[i] < nominal[j]){
				tukarData(&nominal[i], &nominal[j]);
			}
		}
	}cout<<endl;
	
	cout<<"setelah disorting : ";
	for (int i = 0; i < m; i++){
				cout<<nominal[i]<<" ";
	}
}
