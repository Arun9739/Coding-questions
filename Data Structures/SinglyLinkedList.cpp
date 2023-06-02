/* Implementing singly linked list */

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList(){
        head = NULL;
    }
    void insertNode(int data);
    void deleteNode();
    void display();
};

void LinkedList::insertNode(int data){
    Node* newNode = new Node();

    newNode -> data = data;
    newNode -> next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}

void LinkedList::deleteNode(){
    if(head == NULL){
        cout << "List is empty" << endl;
    }
    else{
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
}

void LinkedList::display(){
    if(head == NULL){
        cout << "List is empty" << endl;
    }
    else{
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
}

int main(){
    LinkedList list;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    list.insertNode(5);
    list.display();
    list.deleteNode();
    list.display();
    return 0;
}