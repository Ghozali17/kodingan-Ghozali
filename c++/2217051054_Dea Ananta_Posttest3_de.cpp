#include <iostream>
using namespace std;


int main() {
    int a, b, total = 0;
    cin >> a >> b;
    if (a < 1 || b > 5) {
        cout << "Error";
        return 0; 
    }
    else if (a == b) {
        cout << "0";
    }
    if (a == 1 && a < b) {
        total += 5;
        a = 2;
    }
    if (a == 2 && a < b) {
        total += 8;
        a = 3;
    }
    if (a == 3 && a < b) {
        total += 7;
        a = 4;
    }
    if (a == 4 && a < b) {
        total += 3;
        a = 4;
    }
    cout << total;
    
    return 0;
}
