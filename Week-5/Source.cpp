#include <iostream>
#include "Queue.h"
#include "PQue.h"

using namespace std;

int main() {
    Queue q;
    cout << "Testing Queue Operations:" << endl;

    q.Insert(100);
    q.Insert(2000);
    q.Insert(3000);

    int removedItem;
    q.Remove(removedItem);
    cout << "Removed Item: " << removedItem << endl;

    q.Remove(removedItem);
    cout << "Removed Item: " << removedItem << endl;

    q.Remove(removedItem);
    cout << "Removed Item: " << removedItem << endl;

    // Testing Priority Queue
    cout << "\nTesting Priority Queue Operations:" << endl;
    PQue pq;
    pq.Insert(100, 1);
    pq.Insert(200, 0);
    pq.Insert(300, 2);

    pq.Remove(removedItem);
    cout << "Removed Item from Priority Queue: " << removedItem << endl;

    pq.Remove(removedItem);
    cout << "Removed Item from Priority Queue: " << removedItem << endl;

    pq.Remove(removedItem);
    cout << "Removed Item from Priority Queue: " << removedItem << endl;

    return 0;
}