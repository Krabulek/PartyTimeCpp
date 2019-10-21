#ifndef ZAMKNIETY_H
#define ZAMKNIETY_H
#include <obiekt.h>

class Zamkniety : public Obiekt {
    int _pojemnosc;
    string _typ;
public:
    Zamkniety(string = "-", string = "-", string = "-", int = 0);
    ~Zamkniety();
    void load();
    void show();
    int pojemnosc();
    string typ();
};

#endif // ZAMKNIETY_H
