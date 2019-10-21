#ifndef ZESPOL_H
#define ZESPOL_H
#include <iostream>

using namespace std;

class Zespol {
    int _kod;
    string _nazwa, _gatunek, _kraj;
public:
    Zespol(int = 0, string = "-", string = "-", string = "-");
    ~Zespol();
    void load();
    void show();
    string nazwa();
    string gatunek();
    string kraj();
};

#endif // ZESPOL_H
