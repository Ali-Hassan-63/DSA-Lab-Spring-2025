//#include <iostream>
//using namespace std;
//
//#define maxQue 100
//typedef int itemType;
//
//class Queue {
//private:
//    itemType items[maxQue];
//    int front, rear, count;
//
//public:
//    Queue();
//    int IsEmpty();
//    int isFull();
//    void Insert(itemType newItem);
//    void Remove(itemType& item);
//};
//Queue::Queue() {
//    count = 0;
//    front = 0;
//    rear = 0;
//}
//
//int Queue::IsEmpty() {
//    return (count == 0);
//}
//
//int Queue::isFull() {
//    return (count == maxQue);
//}
//
//void Queue::Insert(itemType newItem) {
//    if (isFull())
//        cout << "Queue overflow" << endl;
//    else {
//        items[rear] = newItem;
//        rear = (rear + 1) % maxQue;
//        ++count;
//    }
//}
//
//void Queue::Remove(itemType& item) {
//    if (IsEmpty())
//        cout << "Queue underflow" << endl;
//    else {
//        item = items[front];
//        front = (front + 1) % maxQue;
//        --count;
//    }
//}
//int main() {
//    Queue q;
//    itemType num;
//    cout << "Inserting numbers into the queue: ";
//    for (int i = 0; i <= 10; i++) {
//        q.Insert(i);
//        cout << i << " ";
//    }
//    cout << endl;
//    cout << "Removing numbers from the queue: ";
//    while (!q.IsEmpty()) {
//        q.Remove(num);
//        cout << num << " ";
//    }
//    cout << endl;
//    return 0;
//}
// Exercise 2
//template<class ItemType>
//Que<ItemType>::Que() {
//	maxQue = 501;
//	front = 0;
//	rear = 0;
//	count = 0;
//	items = new ItemType[maxQue];
//}
//template<class ItemType>
//Que<ItemType>::Que(int max) {
//	maxQue = max + 1;
//	front = 0;
//	rear = 0;
//	count = 0;
//	items = new ItemType[maxQue];
//}
//template<class ItemType>
//Que<ItemType>::Que() {
//	delete[] items;
//}
//template<class ItemType>
//int Que<ItemType>::IsEmpty( )const
//{ 
//	return(count == 0);
//}
//template<class ItemType>
//int Que<ItemType>::IsFull()const; {
//	return(count == maxQue);
//}
//template<class ItemType>
//void Que<ItemType>::Insert(ItemType newItem) {
//	if (IsFull())
//		cout << "Overflow";
//	else {
//		items[rear] = newItem;
//		rear = (rear + 1) % maxQue;
//		++count;
//	}
//}
//template<class ItemType>
//void Que<ItemType>::Remove(ItemType& item) {
//	if (IsEmpty())
//		cout < , "Under flow";
//	else {
//		item = items[front];
//		front = (front + 1) % maxQue;
//		--count;
//	}
//}
#include <iostream>
#include <string>
using namespace std;
template<class ItemType>
class Que {
private:
    int maxQue;
    int front, rear, count;
    ItemType* items;

public:
    Que();
    Que(int max);
    ~Que();

    bool IsEmpty() const;
    bool IsFull() const;

    void Insert(ItemType newItem);
    void Remove(ItemType& item);
};
template<class ItemType>
Que<ItemType>::Que() {
    maxQue = 501;
    front = 0;
    rear = 0;
    count = 0;
    items = new ItemType[maxQue];
}
template<class ItemType>
Que<ItemType>::Que(int max) {
    maxQue = max + 1;
    front = 0;
    rear = 0;
    count = 0;
    items = new ItemType[maxQue];
}
template<class ItemType>
Que<ItemType>::~Que() {
    delete[] items;
}
template<class ItemType>
bool Que<ItemType>::IsEmpty() const {
    return (count == 0);
}
template<class ItemType>
bool Que<ItemType>::IsFull() const {
    return (count == maxQue - 1);
}
template<class ItemType>
void Que<ItemType>::Insert(ItemType newItem) {
    if (IsFull()) {
        cout << "Queue Overflow" << endl;
    }
    else {
        items[rear] = newItem;
        rear = (rear + 1) % maxQue;
        ++count;
    }
}
template<class ItemType>
void Que<ItemType>::Remove(ItemType& item) {
    if (IsEmpty()) {
        cout << "Queue Underflow" << endl;
    }
    else {
        item = items[front];
        front = (front + 1) % maxQue;
        --count;
    }
}
int main() {
    Que<string> myQueue(10);
    string friends[] = { "Ali", "Ahmed", "Sara", "Zain", "Hassan", "Ayesha", "Fatima", "Usman", "Bilal", "Hina" };
    for (int i = 0; i < 10; i++) {
        myQueue.Insert(friends[i]);
    }
    string name;
    cout << "Names removed from queue:" << endl;
    while (!myQueue.IsEmpty()) {
        myQueue.Remove(name);
        cout << name << endl;
    }
    return 0;
}
