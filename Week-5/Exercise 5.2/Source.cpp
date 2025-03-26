#include <iostream>
#include "Queue.h"
#include "PQue.h"

using namespace std;

int main() {
    int numPriorities;
    cout << "Enter the number of priority levels: ";
    cin >> numPriorities;

    PQue pq(numPriorities);
    int choice, item, priority;

    do {
        cout << "\nPriority Queue Operations:\n";
        cout << "1. Insert Item\n";
        cout << "2. Remove Item\n";
        cout << "3. Check if Empty\n";
        cout << "4. Check if Full\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter item and priority (0 to " << numPriorities - 1 << "): ";
            cin >> item >> priority;
            pq.Insert(item, priority);
            break;

        case 2:
            if (!pq.IsEmpty()) {
                pq.Remove(item);
                cout << "Removed Item: " << item << endl;
            }
            else {
                cout << "Priority Queue is empty!\n";
            }
            break;

        case 3:
            cout << (pq.IsEmpty() ? "Priority Queue is empty.\n" : "Priority Queue is not empty.\n");
            break;

        case 4:
            cout << (pq.IsFull() ? "Priority Queue is full.\n" : "Priority Queue is not full.\n");
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
