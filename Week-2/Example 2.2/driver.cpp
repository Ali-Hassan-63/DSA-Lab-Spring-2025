
#include <iostream>
#include "stack.cpp"
using namespace std;
int main() {
	Stack<int> IntStack;
	Stack<float> FloatStack;
	int data;
	float val;
	IntStack.push(35);
	FloatStack.push(3.1415927);
	IntStack.pop(data);
	cout << data << endl;
	FloatStack.pop(val);
	cout << val << endl;
	return 0;
}
