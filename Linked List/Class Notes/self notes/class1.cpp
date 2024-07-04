// creating and printing a node in cpp
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
    Node(){
        this->data = -1; // indicates that the data is not inserted
        this->link = NULL;
    }
    // to pass the data into the linked list
    Node(int n){
        this->data = n;
        this->link = NULL;
    }
};

int main(){
    Node* head  = NULL;
    Node* temp = NULL;
    Node* next;
    int n;
    cout<<"Enter the number of nodes to be inserted"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cout<<"Enter the value to be inseted in node "<<i+1<<endl;
        cin>>x;
        temp = new Node(x);
        if(head == NULL){
            head = temp;
        }
        else{
            next->link = temp;
        }
        next = temp;
        
    }

    // printing the linked list

    cout<<"The value you inserted is"<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->link; // update temp
    }

    return 0;
}

