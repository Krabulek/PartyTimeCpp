#ifndef ELEMENT_H
#define ELEMENT_H

#include<iostream>
#include<vector>
#include<set>
using namespace std;


class Element {
    static vector<Element*> elementy;
    int kod;
    static int id;

public:
    Element();
    virtual ~Element();
    int getKod();

    static Element* getByKod(int kod);
};

#endif // ELEMENT_H
