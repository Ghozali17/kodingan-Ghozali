#include <iostream>

using namespace std; 
int main(){
    int x, y = 0, z = 1, w = 0;
    cin>>x;

    for (int i = 1; i <= x; i++){ 
    if(i == 1) { cout<< y<<" "; continue;
    }
    if(i == 2) { cout<< z <<" "; continue;
    }
    w = y + z; y = z; z = w;
    
    cout << w <<" ";
    }
    return 0; 
}
