#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

class user {
public:
    static int globalId;
    int id;
    std::string name;
    std::string email;

    user(std::string pName, std::string pEmail) : name(pName), email(pEmail) {
        id = ++globalId;
    }
    ~user() {}

    int generateId() {
        return ++globalId;
    }
};

int user::globalId = 0;
#endif