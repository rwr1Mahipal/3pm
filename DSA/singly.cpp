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

    void deleteAtBeg(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        cout<<"deleted: "<<temp->data<<endl;
        head=head->next;
        delete temp;
        temp=nullptr;
    }

    void deleteAtEnd(){
        if(head==NULL){
             cout<<"List is empty"<<endl;
            return;
        }
        if(head->next==NULL){
            cout<<"Deleted: "<<head->data<<endl;
            delete head;
            head=NULL;
            return;
        }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        Node* delVal = temp->next;
        cout<<"Deleted "<<delVal->data<<endl;
        delete delVal;
        temp->next=NULL;
    }

    void update(int pos, int val){
        Node* temp = head;
        for(int i=0; i<pos; i++){
            if(temp == NULL){
                cout<<"POS is out list"<<endl;
                return;
            }
            temp=temp->next;
        }
        temp->data=val;
        cout<<val<<" Value add at " <<pos<<" pos"<<endl;
    }

    void reverse(){
        if(head==NULL){
             cout<<"List is empty"<<endl;
            return;
        }

        Node* pre = NULL;
        Node* cur = head;
        Node* next = NULL;

        while(cur != NULL){
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        head=pre;
    }

};

int main(){
    Singly s;

    s.addAtBeg(100);
    s.addAtBeg(10);
    s.addAtEnd(20);
    s.addAtEnd(200);
    // s.deleteAtBeg();
    // s.deleteAtEnd();
    // s.update(3, 500);
    // s.reverse();
    s.display();
}