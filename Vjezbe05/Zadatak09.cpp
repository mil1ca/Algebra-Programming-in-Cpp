/*Za polje generirano u prethodnom zadatku izračunajte sumu elemenata, umnožak elemenata te aritmetičku sredinu polja.*/

#define SIZE 20

#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
    
    int polje[SIZE];
    
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        polje[i] = rand() % 100;
    }
    
    int suma = 0, umnozak = 1;
    double aritSredina;
    
    for (int i = 0; i < SIZE; i++) {
        cout << polje[i] << " ";
        suma += polje[i];
        umnozak *= polje[i];
    }
    cout << endl;
    
    aritSredina = suma / SIZE;
    
    cout << "Suma polja je " << suma << "." << endl;
    cout << "Umnozak polja je " << umnozak << "." << endl;
    cout << "Aritmeticka sredina polja je " << aritSredina << "." << endl;
    
	return 0;
}
