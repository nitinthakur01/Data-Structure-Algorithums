#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // STL : (standard template library)

    // CONTAINERS :- (Sequential)

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

    // CONTAINERS :- (Non-Sequential)

   // 1. stack
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    while(!st.empty()){
        cout << st.top() << " "; // 4 3 2 1
        st.pop();
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

    // 3. priority queue
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

    // 4. map
    map<string, int> m;
    m["tv"] = 12;
    m["mob"] = 23;
    m["tab"] = 34;
    m["phone"] = 45;
    m["laptop"] = 9;

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    // unordered map
    unordered_map<string, int> um;
    um["tv"] = 12;
    um["mob"] = 23;
    um["tab"] = 34;
    um["phone"] = 45;
    um["laptop"] = 9;

    for(auto p : um){
        cout << p.first << " " << p.second << endl;
    }

    // 5. set
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    for(auto val : s){
        cout << val << " "; // 1 2 3 4 
    }
    cout << endl;

    // unordered set
    unordered_set<int> us;
    us.insert(5);
    us.insert(4);
    us.insert(3);
    us.insert(2);
 
    for(auto val : us){
        cout << val << " "; // 2 3 4 5
    }
    cout << endl;

    // ALGORITHUMS :-

    // sorting array
    int arr[5] = {3, 2, 4, 1, 5};
    int n = 5;

    sort(arr, arr + n); // #include <algorithums> required
    for(int val : arr){
        cout << val << " "; // 1 2 3 4 5 
    }
    cout << endl;

    // sorting vector
    vector<int> vec = {3, 2, 4, 1, 5};

    sort(vec.begin(), vec.end()); 
    for(int val : vec){
        cout << val << " "; // 1 2 3 4 5 
    }
    cout << endl;

    // reverse
    vector<int> vec1 = {3, 2, 4, 1, 5};

    reverse(vec1.begin(), vec1.end()); 
    for(int val : vec1){
        cout << val << " "; // 5 1 4 2 3
    }
    cout << endl;
    return 0;
}