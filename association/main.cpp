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

class doctor {
public:
    std::string name;
    std::vector<patient*> patient_list;

    doctor(std::string pName) :name(pName) {
        std::cout << "Doctor \"" << name << "\" exists\n";
    }
    ~doctor() {
        std::cout << "Doctor \"" << name << "\" does not exist\n";
    }
    void addPatient(patient*);
    void printPatients();
};