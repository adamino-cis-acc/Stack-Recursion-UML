#ifndef INT_STACK_H
#define INT_STACK_H
#include "Node.h"

/*'IntStack' stores a pointer to the top node, which plays the role of the list's
head and a count of how many valus it holds*/

class IntStack {
    private:
        Node* top;
        int count;
    public:
        IntStack();
        ~IntStack();
        void push(int value);   //stack must not be empty;
        int pop();              //stack must not be empty.
        int peek() const;
        bool isEmpty() const;
        int size() const;
};

#endif