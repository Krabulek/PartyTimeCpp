#include "element.h"
#include<iostream>
#include<vector>
#include<set>
using namespace std;


Element::Element() {
    kod = id++;
    elementy.push_back(this);
}

Element::~Element() {
    for (size_t i = 0; i < elementy.size(); i++) {
        if (elementy[i] == this) {
            elementy[i] = elementy.back();
            elementy.pop_back();
            break;
        }
    }
}

int Element::getKod() {
    return kod;
}

Element* Element::getByKod(int kod) {
    for (Element* e : elementy) {
        if (e -> getKod() == kod) {
            return e;
        }
        return nullptr;
    }
};
