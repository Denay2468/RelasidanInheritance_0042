#include <iostream>
#include <string>
using namespace std;
#include "child.h"
#include "mother.h"

int main() {
    mother* varMother = new mother("dini");
    mother* varMother2 = new mother("novi");
    child* varChild1 = new child("tono");
    child* varChild2 = new child("rini");
    child* varChild3 = new child("Dewi");

    varMother->addChild(varChild1);
    varMother->addChild(varChild2);
    varMother2->addChild(varChild3);
    varMother2->addChild(varChild1);

    varMother->printChildren();
    varMother2->printChildren();

    delete varMother;
    delete varMother2;
    delete varChild1;
    delete varChild2;
    delete varChild3;

    system("pause");
    return 0;
}