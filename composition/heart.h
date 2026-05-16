#ifndef HEART_H
#define HEART_H
#include <iostream>

class heart {
public:
    heart() {
        std::cout << "heart turned on\n";
    }
    ~heart() {
        std::cout << "heart turned off\n";
    }
};
#endif