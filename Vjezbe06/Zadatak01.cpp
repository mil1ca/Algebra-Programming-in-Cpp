/*Napišite program koji od korisnika učitava neograničen broj cijelih brojeva. Nakon unosa ispišite brojeve.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> poljeBrojeva;
    char nastavi;
    
    do {
        int broj;
        cout << "Unesite broj > ";
        cin >> broj;
        poljeBrojeva.push_back(broj);
        
        cout << "Nastavi unos (d/n)? > ";
        cin >> nastavi;
        
    } while (nastavi == 'd');
    
    cout << "Uneseni brojevi:" << endl;
    for (int i = 0; i < poljeBrojeva.size(); i++) {
        cout << poljeBrojeva[i];
        if (i == poljeBrojeva.size() - 1) {
            cout << ".";
        } else {
            cout << ", ";
        }
    }

    return 0;
    
}
