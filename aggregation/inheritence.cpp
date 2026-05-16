#include <iostream>
#include <string>
using namespace std;

class person {
public:
    string name;

    person(string pName) :
        name(pName) {
        cout << "person created\n" << endl;
    }
    ~person() {
        cout << "person deleted\n" << endl;
    }

    int sum(int a, int b) {
        return a + b;
    }
};

class student : public person {
public:
    string school;

    student(string pName, string pSchool) : person(pName), school(pSchool) {
        cout << "student created\n" << endl;
    }
    ~student() {
        cout << "student deleted\n" << endl;
    }
    string introduction() {
        return "Hello, my name is " + name + " from " + school + "\n";
    }
};

int main() {
    student student1("andi laksono", "SMAN 1 Bantul");
    cout << student1.introduction();
    cout << "Result = " << student1.sum(10, 90) << endl;

    return 0;
}