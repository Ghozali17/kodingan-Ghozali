#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int p = 0; p < x; p++){
    	for(int q = x; q > p; q--){ cout<<" ";
    }
    for(int R = 1; R <= (2*p -1); R++){
	cout<<"*";
    }
    cout<<endl;
    }
    
}
