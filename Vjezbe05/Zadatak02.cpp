/*Napišite program kao u prethodnom zadatku, samo elemente ispišite od kraja
prema početku odvojene zarezom. Nakon zadnjeg broja slijedi točka.*/

#include <iostream>
using namespace std;

int main() {
    
    int polje[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int i = 10 - 1; i >= 0; i--) {
        cout << polje[i] << " ";
    }

    return 0;
}
