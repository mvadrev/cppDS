#include <iostream>
using namespace std;
struct Node {
        int data;
        Node *link;
    };
    
    Node *head = NULL;
    Node *rear = NULL;
    
    bool isEmpty() {
        if(head == NULL && rear == NULL) 
            return true;
        else 
            return false;
    };
    
    void enque(int value) {
        cout<<"Adding to queue" << endl;
        Node *ptr = new Node();
        ptr->data = value;
        ptr->link = NULL;
        cout<< "Created new node  and assigned value " << ptr->data << endl;
        if(head==NULL && rear==NULL){
            head = ptr;
            rear = ptr;
        }
        else {
            cout<<"Writing..." << ptr->data << " in memory location " << ptr << " into linked list..";
            head->link = ptr;
            rear = ptr;
        };
         
    };
    
    void displayQueue() {
        if(isEmpty()){
            cout<<"Queue is empty";
        }
        else {
            Node *ptr = head;
            while (ptr != NULL){
                cout << ptr->data << endl;
                ptr = ptr->link;
            };
        };
    };

int main()
{
    cout<<"C++ linker lists";
    Node *ptr = new Node();
    ptr->data = 222;
    ptr->link = NULL;
    head = ptr;
    cout<<head;
    enque(2);
    enque(22);
    cout<<"The queue is" << endl;
    displayQueue();
    return 0;
}
