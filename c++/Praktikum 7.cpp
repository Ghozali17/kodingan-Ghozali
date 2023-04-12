#include <iostream>
using namespace std;

int myFunction(int a,int b,int c){
	cout<<"Hasil perkalian a*b*c:";
	return a*b*c;
}

void myFunction1(){
	
	cout<<"Ini adalah prosedur";
}

void myFunction2(string fname){
	cout<<fname<<" Refresh\n";

}

void myFunction3(string name, int age){
	
	cout<<name <<" "<<age<<" years old"<<endl;
}

double luaspersegi(){
	return sisi*sisi;
}

double kelilingpersegi(){
	return sisi*4;
}

int main(){
	int sisi=2;
//	cout<<myFunction(2,3,4);
//	cout<<endl;
//	myFunction1();
//	cout<<endl;
	
//	myFunction2("John");
//	myFunction2("Ikhsan");
//	myFunction2("hanip");

//	myFunction3("ikhsan",19);
	
	cout<<luaspersegi()<<endl;
	cout<<kelilingpersegi();

	
}