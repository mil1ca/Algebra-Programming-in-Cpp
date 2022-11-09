/*Napišite program u kojem polje inicijalizirajte s 10 proizvoljnih brojeva
(korištenjem inicijalizacijske liste), te ih ispišite na ekran odvojene razmakom.*/

#include <iostream>
using namespace std;

int main(void) {
    
    int polje[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int i = 0; i < 10; i++) {
        cout << polje[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
