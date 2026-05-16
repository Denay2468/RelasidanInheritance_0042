#include <iostream>
#include <string>
#include <vector>
using namespace std;

class doctor;

class patient { 
public:
    std::string name;
    std::vector<doctor*> doctor_list;
    patient(std::string pName) :name(pName) {
        std::cout << "Patient \"" << name << "\" exists\n";
    }
    ~patient() {
        std::cout << "Patient \"" << name << "\" does not exist\n";
    }
    void addDoctor(doctor*);
    void printDoctors();
};