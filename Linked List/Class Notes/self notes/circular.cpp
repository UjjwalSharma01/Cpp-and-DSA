#include<bits/stdc++.h>
class node{
    public:
    int val;
    node* next;
    node(n){
        this->val = n;
        this->next = nullptr;
    }
};

void createNode(node* &head, int n){
    int count = 1;
    while(count <= n){
    node* newNode = new node(val);
        if(head == nullptr){
            head = newNode;
            newNode->next = head;
        }else{
            node* temp  = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
        count++;
    }
}
using namespace std;
int main(){
    cout<<"Ujjwal Sharma"<<endl;
    return 0;
}