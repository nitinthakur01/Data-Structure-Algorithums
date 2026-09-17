#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // STL : (standard template library)

    // CONTAINERS :- (Sequential)
    /*
    // 1. vectors
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    vec.emplace_back(4);
    vec.emplace_back(5);

    vec.pop_back();
    vec.pop_back();

    cout << vec.size() << endl; // 3
    cout << vec.capacity() << endl; // 8

    for(int val : vec) {
        cout << val << " "; // 1 2 3
    }
    cout << endl;

    cout << vec[1] << endl; // 2
    cout << vec.at(1) << endl; // 2

    cout << vec.front() << endl; // 1
    cout << vec.back() << endl; // 3

    vector<int> vec1 = {1, 2, 3, 4, 5};
    for (int val : vec1) {
        cout << val << " "; // 1 2 3 4 5 
    }
    cout << endl;

    vector<int> vec2 (5, 1);
    for (int val : vec2) {
        cout << val << " "; // 1 1 1 1 1 
    }
    cout << endl;

    vector<int> vec3 = {1, 2, 3, 4, 5};
    vec3.erase(vec3.begin());
    vec3.insert(vec3.begin() + 2, 150);

    for (int val : vec3) {
        cout << val << " "; // 2 3 150 4 5 
    }
    cout << endl;

    vector<int> vecIt = {1, 2, 3, 4, 5};
    cout << "begin : " << *(vecIt.begin()) << endl; // 1
    cout << "end : " << *(vecIt.end()) << endl; // 0

    // 2. lists
    list <int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    for(int val : l){
        cout << val << " "; // 4 3 1 2 
    }
    cout << endl;

    // 3. deques
    deque <int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    for(int val : d){
        cout << val << " "; // 4 3 1 2 
    }
    cout << endl;
    */
    // CONTAINERS :- (Non-Sequential)
   // 1. stack
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(!s.empty()){
        cout << s.top() << " "; // 4 3 2 1
        s.pop();
    }
    cout << endl;

    // 2. queue
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout << q.front() << " "; // 1 2 3 4
        q.pop();
    }
    cout << endl;

    // priority queue
    priority_queue <int> pq;
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while(!pq.empty()){
        cout <<pq.top() << " "; // 10 5 4 3
       pq.pop();
    }
    cout << endl;


    return 0;

}