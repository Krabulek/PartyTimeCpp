#include "zamkniety.h"
#include "obiekt.h"

Zamkniety::Zamkniety(string n, string a, string t, int p) : Obiekt(n, a){
    _pojemnosc = p;
    _typ = t;
}
Zamkniety::~Zamkniety() {
    cout << endl << endl << "Usuwam obiekt zamkniety: " << nazwa() <<  endl;
}

int Zamkniety::pojemnosc() {
    return _pojemnosc;
}
string Zamkniety::typ() {
    return _typ;
}

void Zamkniety::load() {
    cout << endl << "Typ (klub, restauracja, itp.): ";
    cin >> _typ;
    cout << _typ;
    cout << endl << "Pojemnosc(w m2): ";
    cin >> _pojemnosc;
    cout << _pojemnosc;
    show();

}

void Zamkniety::show() {
    cout << endl << nazwa() << ", (" << typ() << ") adres " << adres() << "  " << pojemnosc() << "m2" << endl;
}
