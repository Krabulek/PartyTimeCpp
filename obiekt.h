#ifndef OBIEKT_H
#define OBIEKT_H
#include <iostream>

using namespace std;

class Obiekt {
    string _adres;
    string _nazwa;
public:
    Obiekt(string = "-", string = "-");
    void load();
    void jaki_typ();
    string nazwa();
    string adres();

    friend class Otwarty;
    friend class Zamkniety;
};
#endif // OBIEKT_H
