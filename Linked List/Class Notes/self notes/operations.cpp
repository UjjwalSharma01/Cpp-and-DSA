// operations in linkedlist
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* link;
    node(int x){
        this->data = x;
        this->link = NULL;
    }
    node(){
        this->data = -1;
        this->link = NULL;
    }
};
void insertInBeginning(node* &head, int x){
    node* temp;
    temp = head;
    head = new node (x);
    head->link = temp;
    delete(temp);
}
void createNode(int x){
    node* temp;
    node* head = NULL;
    node* next;
    for(int i=0;i<x;i++){
        int n;
        cout<<"Enter the data you want to enter in the "<<i+1<<" node"<<endl;
        temp = new node(x);
        if(head == NULL){
            head = temp;
        }else{
            next->link =temp; 
        }
        next = temp;
    }
}
void printNode(node* &head){
    node* temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp = temp->link;
    }
}

void InsertAtEnd(node* head, int x){
    node* temp;
    while(temp!=NULL){
        temp = temp->link;
    }
    node* insert = new node(x);
    temp->link = insert;
    delete(insert);
    
}

void insertAtPlace(node* head, int x,int y){
    int i = 1;
    node* temp;
    node* insert = new node(y); 
    temp = head;
    while(i<=x && temp!=NULL){
        temp = temp->link;
    }
    insert->link = temp->link;
    temp->link = insert;
    delete(temp);
    delete(insert);
}