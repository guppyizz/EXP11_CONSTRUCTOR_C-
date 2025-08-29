#include <iostream>
#include <cstring>
using namespace std;

class Student {
    int id;
    int marks;
public:
    Student(int roll, int score) {
        id = roll;
        marks = score;
    }
    void display() {
        cout << "ID = " << id << endl << "Marks = " << marks;
    }
};

int main() {
    Student s1(101, 85);
    s1.display();
    return 0;
}

/*ID = 101
Marks = 85*/
