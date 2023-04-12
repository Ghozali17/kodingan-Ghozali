#include <iostream>
#include <math.h> 
using namespace std; 
int main(){

float abi,bubu,cici,doa,edo,fahri,ghozali,him,ijo,joko,kiko,loli;
char q = ')'; 
char r= '('; 
char t='+'; 
char u = 1-1;
char z = '*';

cin>>r>>abi>>t>>bubu>>q>>z>>r>>cici>>u>>doa>>q; 
cin>>r>>edo>>t>>fahri>>q>>z>>r>>ghozali>>u>>him>>q; 
cin>>r>>ijo>>t>>joko>>q>>z>>r>>kiko>>u>>loli>>q;

cout<<(abi+bubu)*(cici-doa)<<" "; 
cout<<((edo+fahri)*(ghozali-him));
cout<<" "<<((ijo+joko)*(kiko-loli));

}
