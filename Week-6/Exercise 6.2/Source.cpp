#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include"LinkedList.cpp"
using namespace std;
int main() {
	List<int>L;
	int len;
	string str,reversedstr;
	cout << "Enter a string to reverse it = ";
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		L.push(str[i]);
	}
	for (int i = 0; i < str.length(); i++) {
		reversedstr+=L.pop();
	}
	cout << "\nReversed string = " << reversedstr;
	_getch();
	return 0;
}
