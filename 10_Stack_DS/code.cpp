#include <iostream>
#include <vector>
#include <list>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

// STACK :-

// 1.Stack using vector
class Stack {
    vector<int> v;

public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size() - 1];
    }

    bool empty(){
        return v.size() == 0;
    }
};

// 2.Stack using linkedlist
class StackLL {
    list<int> ll;

public:
    void push(int val){
       ll.push_front(val);
    }

    void pop(){
       ll.pop_front();
    }

    int top(){
        return ll.front(); // head of ll
    }

    bool empty(){
       return ll.size() == 0;
    }
};


int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout << s.top() << " "; // 30 20 10
        s.pop();
    }
    cout << endl;

    StackLL sl;

    sl.push(10);
    sl.push(20);
    sl.push(30);

     while(!sl.empty()){
        cout << sl.top() << " "; // 30 20 10
        sl.pop();
    }
    cout << endl;
    return 0;
}