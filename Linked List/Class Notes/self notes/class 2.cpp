/*

# Doubly Linked List
## Structure of Doubly linked list
[previous address|1| next address] -> [previous address|2| next address] -> [previous address|3| next address] -> NULL
*/

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* prev;
    node* next;

    node(int x){
        this->val = x;
        this->prev = nullptr;
        this->next = nullptr;
    }

};

void createNode(node* &head, int n){
    int count = 1;
    node* temp;
    while(count!=n){
        int val;
        cout<<"Enter the value for "<<count<<" node"<<endl;
        cin>>val;
        node* newNode = new node(val);
        if(head == nullptr){
            head = newNode;
        }else{
            temp = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        count++;
    }
}


// insertion in the beginning of the doubly

void insertInBeginning(node* &head, int val ){
    node* newNode = new node(val);

    newNode->next = head;
    head ->prev = newNode;
    head = newNode;
}

void insertAtEnd(node* &head, int val){
    node* newNode = new node(val);
    node* temp;
    temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    newNode->prev = temp;
    temp -> next = newNode;
}

void insertAtPos(node* &head, int pos, int val){
    int count = 1;
    node* temp = head;
    node* next;
    node* newNode = new node(val);
    while(count != pos){
        temp = temp->next;
        next = temp->next;
        count++;
    }
    newNode->prev = temp;
    newNode->next = next;
    temp->next = newNode;

}

void deleteFromPos(node* &head, int pos){
    node* temp;
    node* prev;
    int count = 1;
    temp = head;
    if(head == nullptr){
        cout<<"Not Possible"<<endl;
    }
    while(count != pos){
        prev = temp;
        temp = temp->next;
        count ++;
    }
    prev->next = temp->next;
    temp->next->prev = prev;
}

// printing doubly linked list
void printList(node* head){
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}       


int main(){
    node* head = nullptr; 
    createNode(head, 7);
    printList(head);
    deleteFromPos(head, 2);
    printList(head);   
    return 0;
}

