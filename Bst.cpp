#include <iostream>
using namespace std;

class Node {
public:
    string category;
    Node* left;
    Node* right;

    Node(string name) {
        category = name;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->category << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->category << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->category << " ";
}

int main() {
    Node* root = NULL;
    int choice;

    do {
        cout << "\n========== LIBRARY MENU ==========\n";
        cout << "1. CREATE ROOT\n";
        cout << "2. ADD LEFT CHILD\n";
        cout << "3. ADD RIGHT CHILD\n";
        cout << "4. INORDER TRAVERSAL\n";
        cout << "5. PREORDER TRAVERSAL\n";
        cout << "6. POSTORDER TRAVERSAL\n";
        cout << "7. EXIT\n";

        cout << "\nENTER CHOICE: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            string name;

            cout << "Enter Root Category: ";
            cin >> name;

            root = new Node(name);

            cout << "Root Created Successfully!\n";
            break;
        }

        case 2: {
            if (root == NULL) {
                cout << "Please create root first!\n";
            }
            else {
                string name;

                cout << "Enter Left Child Category: ";
                cin >> name;

                root->left = new Node(name);

                cout << "Left Child Added Successfully!\n";
            }
            break;
        }

        case 3: {
            if (root == NULL) {
                cout << "Please create root first!\n";
            }
            else {
                string name;

                cout << "Enter Right Child Category: ";
                cin >> name;

                root->right = new Node(name);

                cout << "Right Child Added Successfully!\n";
            }
            break;
        }

        case 4:
            cout << "INORDER TRAVERSAL: ";
            inorder(root);
            cout << endl;
            break;

        case 5:
            cout << "PREORDER TRAVERSAL: ";
            preorder(root);
            cout << endl;
            break;

        case 6:
            cout << "POSTORDER TRAVERSAL: ";
            postorder(root);
            cout << endl;
            break;

        case 7:
            cout << "Exit Program\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}
