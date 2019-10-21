#include "obiekt.h"
#include "otwarty.h"
#include "zamkniety.h"
#include <iostream>

using namespace std;

Obiekt::Obiekt(string n, string a) {
    _nazwa = n;
    _adres = a;
}

string Obiekt::nazwa() {
    return _nazwa;
}

string Obiekt::adres() {
    return _adres;
}

void Obiekt::load() {
    cout << endl << "Nazwa obiektu: ";
    getline(cin, _nazwa);
    cout << endl << "Adres obiektu: ";
    getline(cin, _adres);
    jaki_typ();
}

void Obiekt::jaki_typ() {
    int wybor;
    cout << endl <<"Jaki jest typ obiektu? (Otwarty - 1, Zamknięty - 2): ";
    cin >> wybor;
    if (wybor == 1) {
        Otwarty otwarty(_nazwa, _adres);
        otwarty.load();
    }
    if (wybor == 2) {
        Zamkniety zamkniety(_nazwa, _adres);
        zamkniety.load();
    }
}
