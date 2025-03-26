#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include"LinkedList.cpp"
using namespace std;
int main() {
	List<int>L;
	int len;
	
	cout << "Enter the length of Linked List = ";
	cin >> len;
	L.makeStr(len);

	cout << "\n Display all the nodes of Linked List = ";
	L.displayStr();

	L.deletelast();

	cout << "\n Display all the nodes of Linked List = ";
	L.displayStr();
	_getch();
	return 0;
}