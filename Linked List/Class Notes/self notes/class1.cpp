// // creating and printing a node in cpp
// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* link;
//     Node(){
//         this->data = -1; // indicates that the data is not inserted
//         this->link = NULL;
//     }
//     // to pass the data into the linked list
//     Node(int n){
//         this->data = n;
//         this->link = NULL;
//     }
// };

// int main(){
//     Node* head  = NULL;
//     Node* temp = NULL;
//     Node* next;
//     int n;
//     cout<<"Enter the number of nodes to be inserted"<<endl;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         int x;
//         cout<<"Enter the value to be inseted in node "<<i+1<<endl;
//         cin>>x;
//         temp = new Node(x);
//         if(head == NULL){
//             head = temp;
//         }
//         else{
//             next->link = temp;
//         }
//         next = temp;
        
//     }

//     // printing the linked list

//     cout<<"The value you inserted is"<<endl;
//     temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<endl;
//         temp = temp->link; // update temp
//     }

//     return 0;
// }



















#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int x) {
        this->val = x;
        this->next = nullptr;
    }
};

void createNode(node*& head, int n) {
    int count = 1;
    while (count <= n) {
        int val;
        cout << "Enter the value for node " << count << endl;
        cin >> val;
        node* newNode = new node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            node* temp = head;
            while (temp->next != nullptr) {
                prev = temp;
                temp = temp->next;
            }
            temp->next = newNode;
        }
        count++;
    }
}

void printList(node* head) {
    if (head == nullptr) {
        cout << "Can't print, the list is empty" << endl;
        return;
    }
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseNode(node* &head){
    node* prev = nullptr;
    node* curr = head;
    node* next = nullptr;

    while(curr!= nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = curr;
}


void insertInBeginning (node* &head, int n){
    // if we want to insert a new node in the beginning
    node* temp = head;
    node* newNode = new node(n);
    head = newNode;
    newNode-> next = temp;
}

void insertAtEnd(node* head, int n){
    node* temp =head;
    node* newNode =  new node(n);
    while(temp!=nullptr){
        temp = temp->next;
    }
        temp->next = newNode;
}

void insertAtPos(node* &head, int pos, int value){
    int count = 1;
    node* temp = head;
    node* next;
    node* newNode = new node(value);
    while(count != pos){ // iterate till the position given
    temp = temp->next;
    count ++;
    }
    next = temp->next;
    newNode-> next = next;
    temp->next = newNode;
}

void deleteFromPos(node* &head, int pos){
    node* temp;
    node* prev;
    int count = 1;
    temp = head;
    while(count!=pos){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;

}

// reversal using recursion
// i will solve one case rest everything, recursion will handle
node* reverseRecursion(node* &head, node* curr, node* prev, node* next) {
    if (curr == nullptr) {
        head = prev;
        return head;
    }

    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    return reverseRecursion(head, curr, prev, next);
}


int main() {
    node* head = nullptr;
    cout << "Enter the number of Nodes in the linked list" << endl;
    int n;
    cin >> n;
    createNode(head, n);
    printList(head);

    // Free the allocated memory
    node* current = head;
    while (current != nullptr) {
        node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}