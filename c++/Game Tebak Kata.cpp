#include <iostream>
using namespace std;
int main(){
    int jojo,juju=1;
    int jeje=0;
    string kata, jawab;
    cin>>jojo;
    cin>>kata;
    if(jojo>0 && jojo<11){
        
        for(int i=1;i<=jojo;i++){
        cin>>jawab;
        
        if(jawab==kata){
        jeje++;
        if(juju==jojo){
          cout<<"MENANG "<<jeje; 
        }
        }
        else if(juju>=jojo){
          cout<<"KALAH "<<jeje;
        }
        juju++;
            }
        }
        else{
          cout<<"INPUTAN SALAH";
        }
        return 0;
}
