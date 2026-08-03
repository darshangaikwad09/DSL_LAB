// A ticket booking counter serves customers in the order they arrive
// Implement a Queue using an array to perform
// -> Enqueue
// -> Dequeue
// -> Display

#include <bits/stdc++.h>
using namespace std;

#define MAX 5

class Queue {
private:
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue Operation
    void enqueue(int value) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = value;

        cout << value << " inserted into the queue." << endl;
    }

    // Dequeue Operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Queue is empty." << endl;
            return;
        }

        cout << arr[front] << " deleted from the queue." << endl;
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }

    // Display Operation
    void display() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n===== Queue Menu =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

}

//output: 
//===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 1
// Enter value: 12
// 12 inserted into the queue.

// ===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 1
// Enter value: 14
// 14 inserted into the queue.

// ===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 1
// Enter value: 20
// 20 inserted into the queue.

// ===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 3
// Queue elements: 12 14 20 

// ===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 2
// 12 deleted from the queue.

// ===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 2
// 14 deleted from the queue.

// ===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 2
// 20 deleted from the queue.

// ===== Queue Menu =====
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter your choice: 3
// Queue is empty.
