#include <iostream>
using namespace std;
int main(){
    int jojo;
    cin>>jojo;
    int gigi=0;
    while(jojo>0){
            int lili=jojo%10;
            gigi=gigi*10+lili;
            jojo=jojo/10;            
    }
    cout<<gigi<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int ta;
    cin>>ta;
    int ti=0;
    while(ta>0){
            int tu=ta%10;
            ti=ti*10+tu;
            ta=ta/10;            
    }
    cout<<ti<<endl;
    return 0;
}
