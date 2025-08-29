#include <iostream>
#include <cstring>
using namespace std;

class student {
    int age ;
    string name;
    
    public:
    student(string n,int a){
        name =n;
        age =a;
    }
    
    student (const student &s){
        name=s.name;
        age =s.age;
        cout <<" copy constructor called.." << endl;
    }
    void display() {
        cout <<"name :" << name << " age : "<< age << endl;
    }
};
int main() {
    student s1("ram", 20);
    student s2=s1;
    
    cout<< "original object :";
    s1.display();
    
    cout <<"copied object : ";
    s2.display();
    
    return 0;
   
}
