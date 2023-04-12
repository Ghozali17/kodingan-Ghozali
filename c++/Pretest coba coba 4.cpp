#include <iostream>
using namespace std;
int main (){
    
    int N;
    cin>>N;
    // (N) Adalah nilai
if (N==100) cout<<"A"<<endl;
else if(N>=101&&N<=200) cout<<"Nilai Melebihi Range"<<endl;
else if(N>=80&&N<=99) cout<<"A"<<endl;
else if(N>=76&&N<=79) cout<<"A-"<<endl;
else if(N>=72&&N<=75) cout<<"AB"<<endl;
else if(N>=68&&N<=71) cout<<"B+"<<endl;
else if(N>=64&&N<=67) cout<<"B"<<endl;
else if(N>=60&&N<=63) cout<<"B-"<<endl;
else if(N>=56&&N<=59) cout<<"C+"<<endl;
else if(N>=52&&N<=55) cout<<"C"<<endl;
else if(N>=48&&N<=51) cout<<"C-"<<endl;
else if(N>=44&&N<=47) cout<<"D+"<<endl;
else if(N>=40&&N<=43) cout<<"D"<<endl;
else if(N>=36&&N<=39) cout<<"D-"<<endl;
else if(N>=0&&N<=35) cout<<"E"<<endl;

return 0;
}
