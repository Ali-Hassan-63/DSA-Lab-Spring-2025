#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = prev = nullptr;
    }
};

class LongInteger {
private:
    Node* head;
    Node* tail;
    bool isNegative;

public:
    LongInteger(string num) {
        head = tail = nullptr;
        isNegative = false;

        if (num[0] == '-') {
            isNegative = true;
            num = num.substr(1);
        }

        for (char c : num) {
            append(c - '0');
        }
    }

    ~LongInteger() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void display() {
        if (isNegative) cout << "-";
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }

    static LongInteger add(LongInteger a, LongInteger b) {
        Node* n1 = a.tail;
        Node* n2 = b.tail;
        string result = "";
        int carry = 0;

        while (n1 || n2 || carry) {
            int sum = carry;
            if (n1) {
                sum += n1->data;
                n1 = n1->prev;
            }
            if (n2) {
                sum += n2->data;
                n2 = n2->prev;
            }
            result = char((sum % 10) + '0') + result;
            carry = sum / 10;
        }
        return LongInteger(result);
    }
};

int main() {
    string num1, num2;
    cout << "Enter first long integer: ";
    cin >> num1;
    cout << "Enter second long integer: ";
    cin >> num2;

    LongInteger longInt1(num1);
    LongInteger longInt2(num2);

    cout << "First Long Integer: ";
    longInt1.display();

    cout << "Second Long Integer: ";
    longInt2.display();

    LongInteger sum = LongInteger::add(longInt1, longInt2);
    cout << "Sum: ";
    sum.display();

    return 0;
}
