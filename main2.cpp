#include <iostream>

void countdown(int n){
    if(n < 0){              //base case: nothing left to print
        return;
    }
    std::cout << n << '\n';
    countdown(n - 1);       //recursive case: a smaller countdown
}

struct Node {
    int value;
    Node* next;
};

int countNodes(const Node* head){
    if(head == nullptr){
        return 0;
    }
    return 1 + countNodes(head->next);
}

int main(){
    countdown(5);
    return 0;
}

