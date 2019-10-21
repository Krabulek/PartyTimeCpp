#include "zespol.h"
#include <iostream>

Zespol::Zespol(int k, string n, string g, string p) {
    _nazwa = n;
    _gatunek = g;
    _kraj = p;
}

Zespol::~Zespol() {
    cout << endl << endl << "Usuwam zespol: " << nazwa() <<  endl;
}

string Zespol::nazwa() {
    return _nazwa;
}

string Zespol::gatunek() {
    return _gatunek;
}

string Zespol::kraj() {
    return _kraj;
}

void Zespol::load() {
    cout << endl << "Nazwa zespolu: ";
    getline(cin, _nazwa);
    cout << endl << "Gatunek muzyczny: ";
    getline(cin, _gatunek);
    cout << endl << "Kraj pochodzenia: ";
    getline(cin, _kraj);
}

void Zespol::show() {
    cout << endl << nazwa() << " , gatunek " << gatunek() <<" - " << kraj() << endl;
}
