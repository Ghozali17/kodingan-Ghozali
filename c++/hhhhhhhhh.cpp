#include <iostream>
using namespace std;
int main (){
    
    int N;
    cin>>N;
    // (N) Adalah nilai
if (N==100) cout<<"A"<<endl;
else if(N>=76&&N<=100) cout<<"A"<<endl;
else if(N>=71&&N<=75) cout<<"B+"<<endl;
else if(N>=66&&N<=70) cout<<"B"<<endl;
else if(N>=61&&N<=65) cout<<"C+"<<endl;
else if(N>=56&&N<=60) cout<<"C"<<endl;
else if(N>=50&&N<=55) cout<<"D"<<endl;
else if(N>=0&&N<=49) cout<<"E"<<endl;
else 
cout<<"Nilai Melebihi Range"<<endl;
}
