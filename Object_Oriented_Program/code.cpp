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

// 1. encapsulation : wrapping data and function in a single unit class
class Account{
    // data
    private :
        double balance;
        string password;

    public:
        string accoutId;
        string username;

    // destructor
    ~Account(){
        cout << "Delete everything\n";
    }

    // member function
    void setBalance(double b) {
        balance = b;
    }
    double getBalance() {
        return balance;
    }
};

// 2. inheritance : properties pass from base class to derived class
class Person{ // base class
public :
    string name;
    int age;

    Person(){
        cout << "Parent constructor \n";
    }

    ~Person(){
        cout << "Parent destructor \n";
    }
};

class Student : public Person { // derived class
public :
    int rollno;
    
    Student(){
        cout << "Student constructor \n";
    }

    ~Student(){
        cout << "Student destructor \n";
    }

    void getInfo(){
        cout << "name " << name << endl;
        cout << "age " << age << endl;
        cout << "roll no " << rollno << endl;
    }
};

// 3. polymorphism : ability of objects to take on different forms
class Student2 {
public : 
    string username;

    // constructor overloading
    Student2(){
        cout << "non-parameterized\n";
    }

    Student2(string username){
        this->username = username;
        cout << "parameterized\n";
    }
};

// function overloading
class Print {
public :
    void show(int x){
        cout << "x is :" << x << endl;
    }

    void show(char ch){
        cout << "ch is :" << ch << endl;
    }
};

// 4. Abstraction : hiding sensitive details and show only imp details or parts
class ATM {
private:
    void checkBalance() {
        cout << "Checking balance..." << endl;
    }

public:
    void withdrawMoney() {
        checkBalance();
        cout << "Money withdrawn successfully" << endl;
    }
};

// static keyword
void count(){
    static int x = 0; // initial statement run first time only
    cout << "x is : " << x << endl;
    x++;
}

// static objects
class ABC{
public : 

    ABC(){
        cout << "constructor\n";
    }

    ~ABC(){
        cout << "destructor\n";
    }
};

int main(){
    // object (entity)
    Teacher t1; // constructor call automatically
    t1.name = "Nitin Thakur";
    t1.subject = "Oops";
    t1.setSalary(150);

    Teacher t2(t1); // default copy construtor invoked
    Account a1;

    Student s1;
    s1.name = "Nitin";
    s1.age = 22;
    s1.rollno = 64;
    s1.getInfo();

    Student2 s2;
    Student2 s2("Nitin Thakur");

    Print p1;
    p1.show(123);
    p1.show('n');

    ATM a;
    a.withdrawMoney();  

    count(); // 0
    count(); // 1
    count(); // 2

    static ABC obj; // exists lifetime of program

    cout << t1.name << endl; // Nitin Thakur
    cout << t1.dept << endl;
    cout << t1.getSalary() << endl; // 150
    cout << t2.name << endl; // Nitin Thakur

    return 0;
}