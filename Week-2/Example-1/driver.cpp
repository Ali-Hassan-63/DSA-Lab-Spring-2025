#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack s;
    int item;

    // First, push 20 items
    for (int i = 0; i < 20; i++) {
        s.push(i);
    }

    // Now, pop 20 items
    for (int j = 0; j < 20; j++) {
        s.pop(item);
        cout << "Popped item: " << item << endl;
    }

    return 0;
}
