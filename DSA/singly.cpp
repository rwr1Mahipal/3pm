#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Singly{
    public:
    Node* head;
    Singly(){
        head=NULL;
    }
    void display(){
        if(head==NULL){
            cout<<"List is empty";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<" NULL ";
    }

    void addAtBeg(int val){
        Node* newNode = new Node(val);
        newNode->next=head;
        head=newNode;
    }

    void addAtEnd(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        
        Node* temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

};

int main(){
    Singly s;

    s.addAtBeg(10);
    s.addAtBeg(100);
    s.addAtEnd(20);
    s.addAtEnd(200);
    s.display();
}