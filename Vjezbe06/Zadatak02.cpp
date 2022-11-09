/*Napišite program koji će stvoriti polje sa svim brojevima između 10 i 100 koju su djeljivi s 3. 
Ispišite to polje u obrnutom redoslijedu i izračunajte sumu brojeva u polju.*/ 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> poljeBrojeva;
    int suma = 0;
    
    for (int i = 10; i <= 100; i++) {
        if (i % 3 == 0) {
            poljeBrojeva.push_back(i);
        }
    }
    cout << "Brojevi iz raspona [10-100] djeljivi s 3:" << endl;
    
    for (int i = poljeBrojeva.size() - 1; i >= 0; i--) {
        cout << poljeBrojeva[i] << " ";
        suma += poljeBrojeva[i];
    }
    cout << endl;
    
    cout << "Suma tih brojeva je " << suma << "." << endl;
    
    return 0;
    
}
