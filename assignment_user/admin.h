#ifndef ADMIN_H
#define ADMIN_H
#include "user.h"
#include "member.h"
#include <vector>

class admin : public user {
public:
    admin(std::string pName, std::string pEmail) : user(pName, pEmail) {}
    ~admin() {}

    void showAllMembers(std::vector<member*> members) {
        std::cout << "All Members:\n";
        for (auto& m : members) {
            std::cout << "ID: " << m->id << " | Name: " << m->name
                      << " | Email: " << m->email
                      << " | Status: " << (m->status ? "Active" : "Inactive") << "\n";
        }
    }

    void toggleMemberActivation(member* m) {
        m->status = !m->status;
        std::cout << "Member \"" << m->name << "\" status changed to "
                  << (m->status ? "Active" : "Inactive") << "\n";
    }
};
#endif