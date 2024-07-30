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

int main(){

    return 0;
}