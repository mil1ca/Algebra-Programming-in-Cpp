// Napišite funkciju paran koja vraća istinu ukoliko je proslijeđeni broj paran.

#include <iostream>
using namespace std;


// Funkcija paran koja vraća istinu ukoliko je proslijeđeni broj paran
bool paran(int number) 
{
    bool paran = false;
    
    if (number % 2 == 0) 
    {
        paran = true;
    }
    
    return paran;
}


int main(void) 
{
    int broj;
    
    cout << "Unesite broj za provjeru parnosti > ";
    cin >> broj;
    
    bool jeste_paran;
    jeste_paran = paran(broj);

    if (jeste_paran) 
    {
        cout << "Broj je paran." << endl;
    } 
    else 
    {
        cout << "Broj nije paran." << endl;
    }
    
    return 0;
}
