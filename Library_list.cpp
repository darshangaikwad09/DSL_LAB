#include <iostream>
using namespace std;

struct Node {
    int bookID;
    Node* next;

    Node(int id) {
        bookID = id;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int bookID) {
        Node* newNode = new Node(bookID);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int bookID) {
        Node* newNode = new Node(bookID);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void printList() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->bookID << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList library;
    int choice;
    int bookID;

    do {
        cout << "\nLibrary Book ID List" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Delete from beginning" << endl;
        cout << "4. Display list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book ID for beginning: ";
            cin >> bookID;
            library.insertAtBeginning(bookID);
        } 
        else if (choice == 2) {
            cout << "Enter book ID for end:  ";
            cin >> bookID;
            library.insertAtEnd(bookID);
        } 
        else if (choice == 3) {
            library.deleteFromBeginning();
        } 
        else if (choice == 4) {
            library.printList();
        } 
        else if (choice == 5) {
            cout << "Bye." << endl;
        } 
        else {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 5);

}
