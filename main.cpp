#include <iostream>
#include <impreza.h>
#include <obiekt.h>
#include <otwarty.h>
#include <zamkniety.h>
#include <zespol.h>
#include <element.h>


using namespace std;

int Element::id = 0;
vector<Element*> Element::elementy;

int main()
{

    cout << "=========================System imprezowy==========================" << endl;
    cout << "Anna Cielas" << endl << "===================================================================" << endl;

    Obiekt o1;
    o1.load();

    return 0;
}
