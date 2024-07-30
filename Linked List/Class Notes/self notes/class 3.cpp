#include <bits/stdc++.h>
using namespace std;

// creation of node
class node {
public:
    int val;
    node* next;

    node(int x) {
        this->val = x;
        this->next = nullptr;
    }
};

// creation of Linked list
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
                temp = temp->next;
            }
            temp->next = newNode;
        }
        count++;
    }
}

// find the middle element using slow fast method
node* findMiddle(node* head) {
    node* slow = head;
    node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next; // this will return the second element in case of even number of elements
        slow = slow->next;
    }
    return slow;
}

// to return first element in case of even

// node* findFirstElementEven(node* head){

// }


// reverse k given nodes, and if the number of available nodes -> k then only do it otherwise print it as it as 

int sizeOfList(node* head) {
    int count = 0;
    node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

node* reverseKNodes(node* head, int k) {
    if (head == nullptr) {
        return nullptr;
    }

    int size = sizeOfList(head);
    if (k > size) {
        return head;
    }

    node* curr = head;
    node* next = nullptr;
    node* prev = nullptr;
    int count = 0;

    // Reverse first k nodes of the linked list
    while (curr != nullptr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Now next points to (k+1)th node
    // Recursively call for the list starting from current
    // And make rest of the list as next of first node
    if (next != nullptr) {
        head->next = reverseKNodes(next, k);
    }

    // prev is now head of the input list
    return prev;
}

int main(){
    node* head = nullptr;
    int n;
    cout<<"Enter the number of nodes you want to create"<<endl;
    cin>>n;
    createNode(head, n);
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    head = reverseKNodes(head, k);
    temp = head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }



    return 0;
}