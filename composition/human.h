#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "heart.h"

class human {
public:
    std::string name;
    heart varHeart;

    human(std::string pName)
        : name(pName) {
        std::cout << name << " alive\n";
    }
    ~human() {
        std::cout << name << " dead\n";
    }
};
#endif