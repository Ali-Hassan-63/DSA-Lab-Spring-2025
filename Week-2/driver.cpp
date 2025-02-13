#include <iostream>
#include "stack.h"
using namespace std;
// Function to reverse a string using Stack
string reverseString(const string& str) {
    Stack s;
    string reversed = str;
    // Push each character onto the stack
    for (char ch : str) {
        s.push(ch);
    }
    // Pop characters to get reversed string
    for (size_t i = 0; i < str.length(); i++) {
        reversed[i] = s.peek();  // Peek before popping
        char temp;
        s.pop(temp);
    }

    return reversed;
}

// Main function to test stack operations
int main() {
    Stack s;
    s.push('A');
    s.push('B');
    s.push('C');

    cout << "Top element using peek(): " << s.peek() << endl;  // Should print 'C'

    string input = "Hello";
    string reversed = reverseString(input);

    cout << "Original String: " << input << endl;
    cout << "Reversed String: " << reversed << endl;

    return 0;
}
