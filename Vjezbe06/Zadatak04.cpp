/*Napišite program koji od korisnika traži da unese broj veći od 100 (ako je broj manji od 100 ponavlja se upit). 
Nakon unosa iz raspona (1 broj) upišite sve parne brojeve u polje. Ispišite elemente polja odvojene zarezom. Nakon zadnjeg elementa stavite točku.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string recenica;
    vector<char> poljeSamoglasnika;
    
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    
    cout << "Upisite recenicu > ";
    getline(cin, recenica);
    cout << endl;
    
    for (int i = 0; i < recenica.length(); i++) {
        switch(recenica[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
               poljeSamoglasnika.push_back(recenica[i]);
               break;
            default:
               break;
        }
    }
    
    for (int j = 0; j < poljeSamoglasnika.size(); j++) {
        switch(poljeSamoglasnika[j]) {
            case 'a':
               a++;
               break;
            case 'e':
               e++;
               break;
            case 'i':
               i++;
               break;
            case 'o':
               o++;
               break;
            case 'u':
               u++;
               break;
        }
    }
    
    cout << "Broj ponavljanja samoglasnika:" << endl;
    cout << "a = " << a << " puta." << endl;
    cout << "e = " << e << " puta." << endl;
    cout << "i = " << i << " puta." << endl;
    cout << "o = " << o << " puta." << endl;
    cout << "u = " << u << " puta." << endl;
    
    cout << "Ukupno samoglasnika: " << poljeSamoglasnika.size() << endl;
    
    return 0;
    
}
