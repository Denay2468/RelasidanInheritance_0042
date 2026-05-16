#ifndef MOTHER_H
#define MOTHER_H
#include <iostream>
#include <string>
#include <vector>
#include "child.h"

class mother {
public:
    std::string name;
    std::vector<child*> child_list;

    mother(std::string pName) :name(pName) {
        std::cout << "Mother \"" << name << "\" exists\n";
    }
    ~mother() {
        std::cout << "Mother \"" << name << "\" does not exist\n";
    }
    void addChild(child*);
    void printChildren();
};

void mother::addChild(child* pChild) {
    child_list.push_back(pChild);
}

void mother::printChildren() {
    std::cout << "Child list of Mother \"" << this->name << "\":\n";
    for (int i = 0; i < child_list.size(); i++) {
        std::cout << child_list[i]->name << std::endl;
    }
    std::cout << std::endl;
}
#endif
