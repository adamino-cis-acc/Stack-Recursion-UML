#include <iostream>
#include "IntStack.h"

int main() {
    IntStack readings;
    readings.push(2);
    readings.push(9);
    readings.push(5);

    std::cout << "Top: " << readings.peek() << '\n';
    std::cout << "Size: " << readings.size() << '\n';

    while (!readings.isEmpty()) {
        std::cout << "Undo " << readings.pop() << '\n';
    }

    readings.push(4);
    std::cout << "Size: " << readings.size() << '\n';
    return 0;
}  // readings is destroyed here, and its destructor deletes the node holding 4.