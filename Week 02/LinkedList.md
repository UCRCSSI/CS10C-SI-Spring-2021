# Linked Lists and Dummy Nodes
Do not be fooled. Dummy Nodes aren't dumb. In fact, they're pretty smart! How? Well... 
Let's code it and see what you think

First, What is a Dummy Node? **Think up your own definition and share it with everyone else.**

How do you code a Dummy Node? Go ahead and code it given this node class (fill out the comment and implement any functions):
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

Now code the `InsertAfter()` function. What code can we now emit?