# The core concept
linkedlist is a data structure that is used to store data in a linear way. It is a collection of nodes where each node contains a data field and a reference(link) to the next node in the sequence. The first node is called the head and the last node is called the tail. The tail node points to null.

## Why we need linked list?
because as we now that the array is a data structure that stores the data in the contagious memory location. so let's suppose we have free memory of size 10 mb (but it is not continous, it is fragemented) and the data we wants to store will take the same size that is 10 mb but still we can't store it because the memory is not contagious

similarly with vectors because they are nothing but dynamic __arrays__, also the memory wastage is also there because it double it's size once completely filled and rest of the memory spaces stays empty if we don't fill data in it


__LinkedList__ stores the data in the non-contigious memory locations unlike the array

## Operations in Linked List
1. Insertion : 
    - Insertion at the beginning : O(1)
    - Insertion at the end : O(n)
    - Insertion at the middle : O(n)
2. Deletion 
    - Deletion at the beginning : O(1)
    - Deletion at the end : O(n)
    - Deletion at the middle : O(n)
3. Traversal : O(n)
4. Searching : O(n)
5. Sorting : O(n^2)
6. Merging : O(n)
7. Reversing : O(n)

_Simple Linkedlist_ - visualisation

```
    head -> |data|next| -> |data|next| -> |data|next| -> |data|next| -> |data|next| -> null
```
### Creation of a node
singly linkedlist
```cpp
class node{
    public:
    int data;
    node* next; //  pointer is of node type or node data structure
}
```

## Types of Linked List

1. Singly Linked List : 
how it looks like
```
    head -> 1 -> 2 -> 3 -> 4 -> 5 -> null
```
each node contains the data and the reference to the next node
2. Doubly Linked List
how it looks like
```
    null <- 1 <-> 2 <-> 3 <-> 4 <-> 5 -> null
```
each node contains the data and the reference to the next and previous node
3. Circular Linked List
how it looks like
```
    head -> 1 -> 2 -> 3 -> 4 -> 5 -> head
```
the last node points to the head node, so it makes a circle.
4. Circular Doubly Linked List
how it looks like
```
    head <-> 1 <-> 2 <-> 3 <-> 4 <-> 5 <-> head
```

# Note ( some hacks and important things)

agr loop ki condition `node!= null` hogi then we will reach till the out of the linkedlist once the loop is over 

if the condition is `node->next != null` then we will reach till the last node

whenever we need to make a node NULL we will equate it to NULL or the NULLED Node, if you want just the link to be NULL then you need to do `node->next = NULL`

Don't forget to update the temp pointer in the Loop

Whenever you need to make any changes pass the head by reference

## Creation of the LinkedList
```cpp
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
```
## Traversal of the LinkedList
```cpp
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
```
## Insertion at the beginning
```cpp
void insertInBeginning (node* &head, int n){
    // if we want to insert a new node in the beginning
    node* temp = head;
    node* newNode = new node(n);
    head = newNode;
    newNode-> next = temp;
}
```
## Insertion at the end
```cpp
void insertAtEnd(node* head, int n){
    node* temp =head;
    node* newNode =  new node(n);
    while(temp!=nullptr){
        temp = temp->next;
    }
        temp->next = newNode;
}
```
## Insertion at a given position
```cpp
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
```
## Deletion at the beginning
```cpp
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
```
# Doubly Linked List

## Creation of the node
```cpp
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
```
## Creation of the Doubly Linked List
```cpp
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
```
## Traversal of the Doubly Linked List
```cpp
void printList(node* head){
    if(head == nullptr){
        cout<<"The list is empty"<<endl;
        return;
    }
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
```
## Insertion at the beginning
```cpp
void insertInBeginning(node* &head, int val ){
    node* newNode = new node(val);

    newNode->next = head;
    head ->prev = newNode;
    head = newNode;
}
```
## Insertion at the end
```cpp
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
```
## Insertion at a given position
```cpp
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
```
## Delete from position
```cpp
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
```

# Circular Linked List



