#include <iostream>
#include <obiekt.h>
#include <zespol.h>

using namespace std;

class Impreza {

    int _dzien, _miesiac, _rok;
    int uczestnicy;
    int _obiekt;
    string _nazwa, _rodzaj, _organizator;

public:
    Impreza(string = "brak", string = "-", string = "-",
            int = 1, int = 1, int = 2015, int = 0);
    ~Impreza();
    void load();
    void show();
    string nazwa();
    string rodzaj();
    string organizator();
    string data();
    bool czyMaObiekt();
    void dodajObiekt(Obiekt *o);
    void dodajZespol(Zespol *z);
};
