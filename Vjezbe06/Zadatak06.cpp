/*Napišite program koji učitava od korisnika broj brojeva koje misli učitati. 
Nakon unosa parne brojeve upisuje u polje parniBrojevi , a neparne u polje neparniBrojevi. 
Ispišite polje parnih u normalnom, a polje neparnih u obrnutom redoslijedu.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int broj;
    cout << "Unesite koliko brojeva zelite upisati > ";
    cin >> broj;
    
    int polje[broj];
    
    for (int i = 0; i < broj; i++) {
        cout << "Upisite " << i + 1 << ". broj > ";
        cin >> polje[i];
    }
    
    vector<int> parni;
    vector<int> neparni;
    
    for (int i = 0; i < broj; i++) {
        if (polje[i] % 2 == 0) {
            parni.push_back(polje[i]);
        } else {
            neparni.push_back(polje[i]);
        }
    }
    
    cout << "Parni brojevi:" << endl;
    for (int i = 0; i < parni.size(); i++) {
        cout << parni[i];
        if (i == parni.size() - 1) {
            cout << ".";
        } else {
            cout << ", ";
        }
    }
    cout << endl;
    
    cout << "Neparni brojevi:" << endl;
    for (int i = neparni.size() - 1; i >= 0; i--) {
        cout << neparni[i];
        if (i == 0) {
            cout << ".";
        } else {
            cout << ", ";
        }
    }

    return 0;
    
}
