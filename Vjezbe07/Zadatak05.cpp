// Napišite funkciju minimum koja vraća manji od dva proslijeđena broja.

#include <iostream>
using namespace std;


// Funkcija minimum koja vraća manji od dva proslijeđena broja
int minimum(int x, int y) 
{
    int manji = x;
    
    if (y < manji) 
    {
        manji = y;
    }
    
    return manji;
}


int main(void) 
{
    int prvi, drugi;
    
    cout << "Unesite dva broja za ispis manjeg > ";
    cin >> prvi;
    cin >> drugi;

    cout << "Manji broj je " << minimum(prvi, drugi) << "." << endl;
    
    return 0;
}
