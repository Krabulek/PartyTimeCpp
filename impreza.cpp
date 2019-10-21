#include "impreza.h"
#include <iostream>
#include <string>

using namespace std;

Impreza::Impreza(string n, string r, string o, int d, int m, int y, int u) {
    _nazwa = n;
    _rodzaj = r;
    _organizator = o;
    _dzien = d;
    _miesiac = m;
    _rok = y;
    uczestnicy = u;
    _obiekt = -1;
    cout << "Utworzono impreze "<< nazwa() << endl;
}

Impreza::~Impreza() {
    cout << endl << endl << "Usuwam imprezę: " << nazwa() <<  endl;
}

string Impreza::nazwa() {
    return _nazwa;
}
string Impreza::rodzaj() {
    return _rodzaj;
}
string Impreza::organizator() {
    return _organizator;
};

string Impreza::data() {
    auto s = to_string(_dzien) + "."+ to_string(_miesiac) + "." + to_string(_rok);
    return s;
}

void Impreza::load() {
    cout << endl << "Nazwa wydarzenia: ";
    getline(cin, _nazwa);
    cout << endl << "Rodzaj wydarzenia: ";
    getline(cin, _rodzaj);
    cout << endl << "Organizator: ";
    getline(cin, _organizator);
    cout << endl << "Dzień: ";
    cin >> _dzien;
    cout << endl << "Miesiąc: ";
    cin >> _miesiac;
    cout << endl << "Rok: ";
    cin >> _rok;
}

void Impreza::show() {
    cout << endl << nazwa() << " (" << rodzaj() << ") " << data() << " organizator: " << organizator();
}

bool Impreza::czyMaObiekt() {
    return _obiekt != -1;
}

void Impreza::dodajObiekt(Obiekt *o) {

}
