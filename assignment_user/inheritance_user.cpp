#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "member.h"
#include "admin.h"

int main() {
    admin* varAdmin = new admin("Budi", "budi@mail.com");
    member* varMember1 = new member("Andi", "andi@mail.com");
    member* varMember2 = new member("Lia", "lia@mail.com");

    vector<member*> memberList;
    memberList.push_back(varMember1);
    memberList.push_back(varMember2);

    varAdmin->showAllMembers(memberList);
    cout << "\n";

    varMember1->showProfile();
    cout << "\n";

    varAdmin->toggleMemberActivation(varMember1);
    cout << "\n";

    varAdmin->showAllMembers(memberList);

    delete varAdmin;
    delete varMember1;
    delete varMember2;

    return 0;
}