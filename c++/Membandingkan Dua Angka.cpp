#include <iostream>
using namespace std;
int main(){
    int jojo,jiji;
    cin>>jojo>>jiji;
    if((jojo>0&&jojo<=100)&&(jiji>0&&jiji<=100)){
    if(jojo==jiji){
        cout<<jojo<<" == "<<jiji<<endl;
 
    }else if(jojo!=jiji){
        cout<<jojo<<" != "<<jiji<<endl;
    }if(jojo<jiji){
        cout<<jojo<<" < "<<jiji<<endl;
    }if(jojo<=jiji){
        cout<<jojo<<" <= "<<jiji<<endl;
    }else if(jojo>jiji){
        cout<<jojo<<" > "<<jiji<<endl;
    }if(jojo>=jiji){
        cout<<jojo<<" >= "<<jiji<<endl;
        
    }
    }else{
        cout<<"INPUTAN SALAH"<<endl;
    }
    return 0;
}
