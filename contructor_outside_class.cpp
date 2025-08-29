#include <iostream>
#include <cstring>
using namespace std;

class Student {
    int age;
    char name[50];
    float gpa;
public:
    Student();
    void display();
};

Student::Student() {
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Name: ";
    cin.getline(name, 50);
    cout << "Enter your GPA: ";
    cin >> gpa;
}

void Student::display() {
    cout << endl << age << "\t" << name << "\t" << gpa;
}

int main() {
    Student s;
    s.display();
    return 0;
}

/*Enter age: 33
Enter Name: updesh
Enter your GPA: 7.5

33	updesh	7.5*/
