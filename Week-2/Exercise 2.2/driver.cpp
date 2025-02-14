
#include <iostream>

#include "stack.cpp"
using namespace std;

bool isValidParentheses(string exp) {
	Stack<char> s;
	for (char ch : exp) {
		if (ch == '(') {
			s.push(ch);
		}
		else if (ch == ')') {
			if (s.IsEmpty()) return false;
			char temp;
			s.pop(temp);
		}
	}
	return s.IsEmpty();
}

int precedence(char op) {
	if (op == '+' || op == '-') return 1;
	if (op == '*' || op == '/') return 2;
	return 0;
}

string infixToPostfix(string infix) {
	Stack<char> s;
	string postfix = "";
	for (char ch : infix) {
		if (isalnum(ch)) {
			postfix += ch;
		}
		else if (ch == '(') {
			s.push(ch);
		}
		else if (ch == ')') {
			char temp;
			while (!s.IsEmpty()) {
				s.pop(temp);
				if (temp == '(') break;
				postfix += temp;
			}
		}
		else {
			while (!s.IsEmpty()) {
				char temp;
				s.pop(temp);
				if (precedence(temp) < precedence(ch)) {
					s.push(temp);
					break;
				}
				else {
					postfix += temp;
				}
			}
			s.push(ch);
		}
	}
	while (!s.IsEmpty()) {
		char temp;
		s.pop(temp);
		postfix += temp;
	}
	return postfix;
}

int evaluatePostfix(string postfix) {
	Stack<int> s;
	for (char ch : postfix) {
		if (isdigit(ch)) {
			s.push(ch - '0');
		}
		else {
			int val1, val2;
			s.pop(val2);
			s.pop(val1);
			switch (ch) {
			case '+': s.push(val1 + val2); break;
			case '-': s.push(val1 - val2); break;
			case '*': s.push(val1 * val2); break;
			case '/': s.push(val1 / val2); break;
			}
		}
	}
	int result;
	s.pop(result);
	return result;
}

int main() {
	string expr = "(3+5)*2";
	cout << "Valid Parentheses: " << (isValidParentheses(expr) ? "Yes" : "No") << endl;

	string infix = "A+B*C";
	cout << "Infix to Postfix: " << infixToPostfix(infix) << endl;

	string postfix = "35+2*";
	cout << "Postfix Evaluation: " << evaluatePostfix(postfix) << endl;

	return 0;
}
