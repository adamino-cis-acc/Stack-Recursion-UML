#include <iostream>

void countdown(int n){
    if(n < 0){              //base case: nothing left to print
        return;
    }
    std::cout << n << '\n';
    countdown(n - 1);       //recursive case: a smaller countdown
}

int main(){
    countdown(5);
    return 0;
}

