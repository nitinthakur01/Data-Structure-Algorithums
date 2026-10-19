#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

// LINKEDLIST :-

class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    // adding new node to front of ll
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    // adding new node to back of ll
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // deleting node from front in ll
    void pop_front(){
        if(head == NULL){
            cout << "LL is empty\n";
            return;
        }

        Node* temp  = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    // deleting node from back in ll
    void pop_back(){
        if(head == NULL){
            cout << "LL is empty\n";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // insert node in middle of ll
    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid position\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Invalid position\n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // print values of ll
    void printLL(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // search a value of ll
    int search(int key){
        Node* temp = head;
        int index = 0;

        while(temp != NULL){
            if(temp->data ==key){
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }
};

int main(){

    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    ll.push_back(6);

    ll.pop_front();

    ll.pop_back();

    ll.insert(6, 1);

    ll.printLL();

    cout << ll.search(2);
    
    return 0;

}