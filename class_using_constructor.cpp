#include <iostream>
#include <cstring>
using namespace std;

class Student {
    int rollNo;
    char name[50];
    double fee;

public:
    Student() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        cin.getline(name, 50);
        cout << "Enter Fee: ";
        cin >> fee;
    }

    void display() {
        cout << endl <<rollNo <<"\t"<< name << "\t" << fee;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}

/*Enter Roll Number: 124
Enter Name: updesh
Enter Fee: 500000

124	updesh	500000 */
