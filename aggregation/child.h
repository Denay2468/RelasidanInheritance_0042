#ifndef CHILD_H
#define CHILD_H
#include <iostream>
#include <string>

class child {
public:
    std::string name;
    child(std::string pName) :name(pName) {
        std::cout << "Child \"" << name << "\" exists\n";
    }
    ~child() {
        std::cout << "Child \"" << name << "\" does not exist\n";
    }
};
#endif