#include "uczestnik.h"
#include <iostream>
#include <string>

using namespace std;

Uczestnik::Uczestnik(string l, string i, string n) {
    _login = l;
    _imie = i;
    _nazwisko = n;
    cout << "Dodano osobe " << login() << endl;
}

Uczestnik::~Uczestnik() {
    cout << endl << "Usuwam osobe: " << login() <<  endl;
}

string Uczestnik::login() {
    return _login;
}
string Uczestnik::osoba() {
    return _imie + _nazwisko;
}

void Uczestnik::load() {
    cout << endl << "Login uczestnika: ";
    getline(cin, _login);
    cout << endl << "Imie: ";
    getline(cin, _imie);
    cout << endl << "Nazwisko: ";
    getline(cin, _nazwisko);
}

void Uczestnik::show() {
    cout << endl << "Uzytkownik " << login() << osoba()<< endl;
}
