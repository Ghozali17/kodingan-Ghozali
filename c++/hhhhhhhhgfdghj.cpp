#include <iostream>
using namespace std;
int main(){

int a = 114, b = 22, c = 13;
tukar(a, b, c);
cout << a << " " << b << " " << c << endl;

void tukar(int &a, int &b, int &c) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
}
