#include <iostream>
#include <string>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

// OBJECT ORIENTED PROGRAMMING :-

// class
class Teacher {
    // properties
private:
    double salary;

public: 
    string name;
    string dept;
    string subject;

    // methods (member function)
    void changeDept(string newDept){
        dept = newDept;
    }
    // setter func
    void setSalary(double s){
        salary  = s;
    }
    // getter func
    double getSalary(){
        return salary;
    }
};


int main(){
    // object (entity)
    Teacher t1;
    t1.name = "Nitin Thakur";
    t1.dept = "CSE";
    t1.subject = "Oops";
    t1.setSalary(150);

    cout << t1.name << endl; // Nitin Thakur
    cout << t1.getSalary() << endl; // 150

    return 0;
}