#include <iostream>
using namespace std;
int main(){
    int jojo;
    cin>>jojo;
    if(jojo>0&&jojo<10^6){
    }
    for(int juju = 0; juju < jojo; juju++){
        for(int jeje = juju; jeje > 0; jeje--){ cout<<"  ";
        }
        for(int jaja = jojo; jaja > juju; jaja--){ cout<<jaja<< " ";
        }
        cout<<endl;
    }
    
}
