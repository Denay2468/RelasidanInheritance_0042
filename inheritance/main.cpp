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