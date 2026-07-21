#include <iostream>
#include <string>
using namespace std;

#define MAX 5

class Stack
{
private:
    string books[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(string book)
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow! No space for more books.\n";
            return;
        }

        books[++top] = book;
        cout << book << " returned successfully.\n";
    }
    // Arrange Book (pop)
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow! No books to arrange.\n";
            return;
        }

        cout << books[top] << " arranged on the shelf.\n";
        top--;
    }
    //Top Book (peek)
    void peek()
    {
        if (top == -1)
        {
            cout << "No Books in Stack.\n";
            return;
        }
        cout << "Top Book: " << books[top] << endl;
    }
    // Display Stack
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty.\n";
            return;
        }
        cout << "Books in Stack:\n";
        for (int i = top; i >= 0; i--)
            cout << books[i] << endl;
    }
};

int main()
{
    Stack s;
    int choice;
    string book;

    do
    {
        cout<<"\n==== Library Stack Menu ====\n";
        cout << "1. Return Book (Push)"<<endl;
        cout << "2. Arrange Book (Pop)\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin.ignore();
            cout << "Enter Book Name: ";
            getline(cin, book);
            s.push(book);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}



//OUTPUT:
// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 1
// Enter Book Name: DBMS
// DBMS returned successfully.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 1
// Enter Book Name: DSA
// DSA returned successfully.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 1
// Enter Book Name: SE
// SE returned successfully.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 1
// Enter Book Name: PIA
// PIA returned successfully.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 1
// Enter Book Name: ES
// ES returned successfully.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 4
// Books in Stack:
// ES
// PIA
// SE
// DSA
// DBMS

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 2
// ES arranged on the shelf.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 2
// PIA arranged on the shelf.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 2
// SE arranged on the shelf.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 2
// DSA arranged on the shelf.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 2
// DBMS arranged on the shelf.

// ==== Library Stack Menu ====
// 1. Return Book (Push)
// 2. Arrange Book (Pop)
// 3. Peek
// 4. Display
// 5. Exit
// Enter Choice: 5
// Exiting Program...
