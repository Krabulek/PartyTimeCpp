#ifndef OTWARTY_H
#define OTWARTY_H
#include <obiekt.h>


class Otwarty : public Obiekt {
    int _powierzchnia;
public:
    Otwarty(string = "-", string = "-", int = 0);
    ~Otwarty();
    void load();
    void show();
    int powierzchnia();

};

#endif // OTWARTY_H
