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


bool detectCycle(node* head){
    node* slow =head;
    node* fast= head;

    while(fast!=nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}

node* detectStart(node* head) {
    // Detecting the starting point of the loop
    node* slow = head;
    node* fast = head;

    // Detect if a cycle exists
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast) {
            // Cycle detected, find the start of the cycle
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; // Start of the cycle
        }
    }

    return nullptr; // No cycle
}


node* removeDuplicates(node* head) {
    node* next = nullptr;
    node* curr = head;
    while(curr!=nullptr && curr->next !=nullptr){
        next = curr->next;
        if(curr->data == next->data){
            next = next->next;
            curr->next = next;
        }else{
            curr = curr->next;
        }
    }
    return head;
}





node* sortList(node* head) {
    // create dummy nodes
    node* zeroHead = new node(-1); // -1 is the dummy value
    node* zeroTail = zeroHead; // otherwise we need to create temp repeatedly

    node* oneHead = new node(-1);
    node* oneTail = oneHead; // initially both will be at the same location

    node* twoHead = new node(-1);
    node* twoTail = twoHead;

    // traverse and then add the nodes to dummy nodes
    node* curr = head;
    while (curr != nullptr) {
        // first create the cases and then handle it
        if (curr->val == 0) {
            zeroTail->next = curr;
            zeroTail = zeroTail->next;
        } else if (curr->val == 1) {
            oneTail->next = curr;
            oneTail = oneTail->next;
        } else if (curr->val == 2) {
            twoTail->next = curr;
            twoTail = twoTail->next;
        }
        curr = curr->next;
    }

    // terminate the lists
    zeroTail->next = nullptr;
    oneTail->next = nullptr;
    twoTail->next = nullptr;

    // remove the dummy values from the dummy nodes
    zeroHead = zeroHead->next;
    oneHead = oneHead->next;
    twoHead = twoHead->next;

    // add up the values
    // cases possible
    /*
    1. zeroHead is NULL
    2. oneHead is NULL
    3. twoHead is NULL
    4. All are NULL
    */
    if (zeroHead != nullptr) {
        head = zeroHead;
        if (oneHead != nullptr) {
            zeroTail->next = oneHead;
            if (twoHead != nullptr) {
                oneTail->next = twoHead;
            }
        } else {
            zeroTail->next = twoHead;
        }
    } else if (oneHead != nullptr) {
        head = oneHead;
        if (twoHead != nullptr) {
            oneTail->next = twoHead;
        }
    } else {
        head = twoHead;
    }

    return head;
}

node* addTwoNUmbers(node* head)/{
    return;
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