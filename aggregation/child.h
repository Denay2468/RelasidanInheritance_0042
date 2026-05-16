#ifndef CHILD_H
#define CHILD_H
#include <iostream>
#include <string>
using namespace std;

class child {
public:
    string name;
    child(string pName) :name(pName) {
        cout << "Child \"" << name << "\" exists\n";
    }
    ~child() {
        cout << "Child \"" << name << "\" does not exist\n";
    }
};
#endif