#include <iostream>

using namespace std;

template <typename T>
class Deque {
private:
    T* arr;
    int front, rear, size, capacity;

    void resize() {
        int newCapacity = capacity * 2;
        T* newArr = new T[newCapacity];
        int j = 0;
        for (int i = front; i != rear; i = (i + 1) % capacity) {
            newArr[j++] = arr[i];
        }
        newArr[j++] = arr[rear];
        delete[] arr;
        arr = newArr;
        front = 0;
        rear = j - 1;
        capacity = newCapacity;
    }

public:
    Deque(int cap = 10) : front(-1), rear(-1), size(0), capacity(cap) {
        arr = new T[capacity];
    }

    ~Deque() {
        delete[] arr;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void pushFront(T value) {
        if (isFull()) resize();
        front = (front - 1 + capacity) % capacity;
        arr[front] = value;
        if (rear == -1) rear = front;
        size++;
    }

    void pushBack(T value) {
        if (isFull()) resize();
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        if (front == -1) front = rear;
        size++;
    }

    void popFront() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }
        front = (front + 1) % capacity;
        size--;
        if (size == 0) front = rear = -1;
    }

    void popBack() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }
        rear = (rear - 1 + capacity) % capacity;
        size--;
        if (size == 0) front = rear = -1;
    }

    T getFront() {
        if (isEmpty()) throw runtime_error("Deque is empty!");
        return arr[front];
    }

    T getBack() {
        if (isEmpty()) throw runtime_error("Deque is empty!");
        return arr[rear];
    }

    int getSize() {
        return size;
    }
};

int main() {
    Deque<int> dq;
    dq.pushFront(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.pushBack(25);

    cout << "Front: " << dq.getFront() << endl;
    cout << "Back: " << dq.getBack() << endl;

    dq.popFront();
    dq.popBack();

    cout << "Front after pop: " << dq.getFront() << endl;
    cout << "Back after pop: " << dq.getBack() << endl;

    return 0;
}