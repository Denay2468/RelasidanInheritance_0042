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

void patient::addDoctor(doctor* pDoctor) {
    doctor_list.push_back(pDoctor);
}

void patient::printDoctors() {
    cout << "List of Doctors handling patient \"" << this->name << "\":\n";
    for (auto& a : doctor_list) {
        cout << a->name << "\n";
    }
    cout << endl;
}

void doctor::addPatient(patient* pPatient) {
    patient_list.push_back(pPatient);
    pPatient->addDoctor(this);
}

void doctor::printPatients() {
    cout << "List of Patients from doctor \"" << this->name << "\":\n";
    for (auto& a : patient_list) {
        cout << a->name << "\n";
    }
    cout << endl;
}

int main() {
    doctor* varDoctor1 = new doctor("dr.Budi");
    doctor* varDoctor2 = new doctor("dr.Tono");
    patient* varPatient1 = new patient("Andi");
    patient* varPatient2 = new patient("Lia");

    varDoctor1->addPatient(varPatient1);
    varDoctor1->addPatient(varPatient2);
    varDoctor2->addPatient(varPatient1);

    varDoctor1->printPatients();
    varDoctor2->printPatients();
    varPatient1->printDoctors();
    varPatient2->printDoctors();

    delete varPatient1;
    delete varPatient2;
    delete varDoctor1;
    delete varDoctor2;

    return 0;
}