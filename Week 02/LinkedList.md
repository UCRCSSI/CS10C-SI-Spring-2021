# Linked Lists and Dummy Nodes
Do not be fooled. Dummy Nodes aren't dumb. In fact, they're pretty smart! How? Well... 
Let's code it and see what you think

First, What is a Dummy Node? **Think up your own definition and share it with everyone else.**

How do you code a Dummy Node? Go ahead and code a list given this node class (fill out the comment and implement any functions):
```c++
class Node {
private:
    int num;
    Node* next;
public:
    Node(int num) : num(num), next(nullptr) { }
    int getNum() const;
    friend class /* List class's Name */; 
};
```
Now code the `InsertAfter()` function given that we will be using a dummy node. What code can we now emit?

Now code the `Remove()` function.

### Doubly Linked List
What is so special about it?

Go ahead and code these functions for it:
```c++
push_back();
push_front();
remove();
insert();
print();
```

What makes some of these function different for a doubly linked list compared to a singly linked list? (Think about it in terms of `O()`)

### Circularly Linked List
What is so special about it?

What functions might be good for this?  
What scenarios might be good for this?  

Are circularly linked list bound to be a doubly? or can it be a singly?