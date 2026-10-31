#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

// LINKEDLIST :-

// 1. SINGLY LINKEDLIST
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

// 2. DOUBLY LINKEDLIST
class Dnode {
    public:
        int data;
        Dnode* next;
        Dnode* prev;

        Dnode(int val){
            data = val;
            next = prev = NULL;
        }
};

class DoublyList {
   Dnode* head;
   Dnode* tail;
    
    public:
        DoublyList(){
            head = tail = NULL;
        }
    
    void push_front(int val){
       Dnode* newNode = new Dnode(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
       Dnode* newNode = new Dnode(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "DLL is empty\n";
            return;
        }
        Dnode* temp = head;
        head = head->next;

        if(head != NULL){
            head->prev = NULL;
        }
        
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "DLL is empty\n";
            return;
        }
        Dnode* temp = tail;
        tail = tail->prev;

        if(tail != NULL){
            tail->next = NULL;
        }
        
        temp->prev = NULL;
        delete temp;
    }
    
    void print(){
       Dnode* temp = head;

        while(temp !=NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// 3. CIRCULAR LINKEDLIST
class Cnode {
public:
    int data;
    Cnode* next;

    Cnode(int val){
        data = val;
        next = NULL;
    }
};

class CircularList {
    Cnode* head;
    Cnode* tail;

public:
    CircularList(){
        head = tail = NULL;
    }

    void insertAtHead(int val){
        Cnode* newNode = new Cnode(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAtTail(int val){
        Cnode* newNode = new Cnode(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead(){
        if(head == NULL) return;
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }
        else{
            Cnode* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

     void deleteAtTail(){
        if(head == NULL) return;
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }
        else{
            Cnode* temp = tail;
            Cnode* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void print(){
        if(head == NULL) return;
        
        cout << head->data << "->";
        Cnode* temp = head->next;

        while(temp != head){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << endl;
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

    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    dll.push_back(5);
    dll.pop_front();
    dll.pop_back();
    dll.print();

    CircularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtTail(4);
    cll.insertAtTail(5);
    cll.deleteAtHead();
    cll.deleteAtTail();
    cll.print();
    
    return 0;
}