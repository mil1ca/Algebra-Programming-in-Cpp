/*Napravite adresar aplikaciju. U adresar se može unijeti neograničen broj osoba. 
Svaku osobu definira ime, prezime i godine. 
Nakon unosa podataka aplikacija traži unos rednog broja osobe čije informacije treba ispisati. 
Mora se unijeti odgovarajući redni broj, a u protivnom se ispisuje greška "Krivo unesen redni broj" i ponavlja se*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
    
    vector<string> imena;
    vector<string> prezimena;
    vector<int> godine;
    
    
    char znak;
    
    do {
        string ime, prezime;
        int godina;
        cout << "Upisite ime osobe > ";
        cin >> ime;
        imena.push_back(ime);
        cout << "Upisite prezime osobe > ";
        cin >> prezime;
        prezimena.push_back(prezime);
        cout << "Upisite godine osobe > ";
        cin >> godina;
        godine.push_back(godina);
        cout << "Zelite li nastaviti upis (d/n)? > ";
        cin >> znak;
    } while (znak == 'd' || znak == 'D');
    
    int broj;
    do {
        cout << "Unesite redni broj > ";
        cin >> broj;
        if (broj < 1 || broj > imena.size()) {
            cout << "Krivo unesen redni broj.";
        } else {
            cout << imena[broj - 1] << " - " << prezimena[broj - 1] << " - " << godine[broj - 1] << endl;
            break;
        }
    } while (broj < 1 || broj > imena.size());
    
    
    return 0;
    
}
