#ifndef MEMBER_H
#define MEMBER_H
#include "user.h"

class member : public user {
public:
    std::string id_member;
    std::string email_member;
    std::string name_member;
    bool status;

    member(std::string pName, std::string pEmail) : user(pName, pEmail), status(true) {}
    ~member() {}

    void showProfile() {
        std::cout << "ID: " << id << "\n"
                  << "Name: " << name << "\n"
                  << "Email: " << email << "\n"
                  << "Status: " << (status ? "Active" : "Inactive") << "\n";
    }
};
#endif