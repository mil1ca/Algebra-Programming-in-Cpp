/*Napišite program koji s tastature učitava jedan cijeli broj te ispisuje umnožak sa 16 i zbroj sa 42.*/

#include <iostream>
using namespace std;

int main() {
    
    int broj;
    
    cout << "Upisite cijeli broj > ";
    cin >> broj;
    
    cout << "Umnozak sa 16: " << broj << " * 16 = " << broj * 16 << endl;
    cout << "Zbroj sa 42: " << broj << " + 42 = " << broj + 42 << endl;
    
    return 0;
}
