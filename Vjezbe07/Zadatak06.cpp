// Napišite funkciju maksimum koja vraća veći od tri proslijeđena broja.

#include <iostream>
using namespace std;

// Funkcija Napišite funkciju maksimum koja vraća veći od tri proslijeđena broja
int maksimum(int a, int b, int c)
{
    if (a > b) 
    {
        if (a > c) 
        {
            return a;
        }
        return c;
    } 
    else 
    {
        if (b > c) 
        {
            return b;
        }
        return c;
    }
}

int main(void) 
{
    int prvi, drugi, treci;
    
    cout << "Unesite tri broja za ispis najveceg > ";
    cin >> prvi;
    cin >> drugi;
    cin >> treci;

    cout << "Najveci broj je " << maksimum(prvi, drugi, treci) << "." << endl;
    
    return 0;
}
