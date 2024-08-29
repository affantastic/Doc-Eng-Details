#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    int salary;

public:
    Person(string name, int age, int salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: $ " << salary << endl;
    }
};

class Doctor : public Person {
public:
    Doctor(string n, int a, int s) : Person(n, a, s) {
        cout << "Doctor Details - ";
        display();
    }
};

class Engineer : protected Person {
public:
    Engineer(string n, int a, int s) : Person(n, a, s) {
        cout << "Engineer Details - ";
        display();
    }
};

int main() {
    Doctor ob1("House", 48, 8755);
    Engineer ob2("Matt", 34, 3374);

    return 0;
}
