#include "otwarty.h"
#include "obiekt.h"

Otwarty::Otwarty(string a, string n, int p) : Obiekt(a, n){
    _powierzchnia = p;

}
Otwarty::~Otwarty() {
    cout << endl << endl << "Usuwam obiekt otwarty: " << nazwa() <<  endl;
}

int Otwarty::powierzchnia() {
    return _powierzchnia;
}

void Otwarty::load() {
    cout << endl << "Powierzchnia: ";
    cin >> _powierzchnia;
    show();
}

void Otwarty::show() {
    cout << endl << nazwa() << " , adres " << adres() <<" - " << powierzchnia() << "m2" << endl;
}

