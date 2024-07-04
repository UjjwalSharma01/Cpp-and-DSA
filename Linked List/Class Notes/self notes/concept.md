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



