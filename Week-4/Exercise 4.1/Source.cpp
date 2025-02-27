#include <iostream>
using namespace std;

#define maxQue 100
typedef int itemType;

class Queue {
private:
    itemType items[maxQue];
    int front, rear, count;

public:
    Queue();
    int IsEmpty();
    int isFull();
    void Insert(itemType newItem);
    void Remove(itemType& item);
};
Queue::Queue() {
    count = 0;
    front = 0;
    rear = 0;
}

int Queue::IsEmpty() {
    return (count == 0);
}

int Queue::isFull() {
    return (count == maxQue);
}

void Queue::Insert(itemType newItem) {
    if (isFull())
        cout << "Queue overflow" << endl;
    else {
        items[rear] = newItem;
        rear = (rear + 1) % maxQue;
        ++count;
    }
}

void Queue::Remove(itemType& item) {
    if (IsEmpty())
        cout << "Queue underflow" << endl;
    else {
        item = items[front];
        front = (front + 1) % maxQue;
        --count;
    }
}

int main() {
    Queue q;
    itemType num;
    cout << "Inserting numbers into the queue: ";
    for (int i = 0; i <= 10; i++) {
        q.Insert(i);
        cout << i << " ";
    }
    cout << endl;
    cout << "Removing numbers from the queue: ";
    while (!q.IsEmpty()) {
        q.Remove(num);
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
