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

    // Constructor
    // non-parameterized
    Teacher() {
        cout << "Constructor \n";
        dept = "CSE";
    }
    // parameterized
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name; // this pointer
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor
    Teacher(Teacher &obj){
        this->name = obj.name; 
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
   
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

// encapsulation : wrapping data and function in a single unit class
class Account{
    // data
    private :
        double balance;
        string password;

    public:
        string accoutId;
        string username;

    // member function
    void setBalance(double b) {
        balance = b;
    }
    double getBalance() {
        return balance;
    }
};


int main(){
    // object (entity)
    Teacher t1; // constructor call automatically
    t1.name = "Nitin Thakur";
    t1.subject = "Oops";
    t1.setSalary(150);

    Teacher t2(t1); // default copy construtor invoked

    cout << t1.name << endl; // Nitin Thakur
    cout << t1.dept << endl;
    cout << t1.getSalary() << endl; // 150

    cout << t2.name << endl; // Nitin Thakur

    return 0;
}