#ifndef UCZESTNIK_H
#define UCZESTNIK_H
#include <iostream>

using namespace std;

class Uczestnik {
    string _login, _imie, _nazwisko;

public:
    Uczestnik(string = "-", string = "-", string = "-");
    ~Uczestnik();
    void load();
    void show();
    string login();
    string osoba();
};

#endif // UCZESTNIK_H
