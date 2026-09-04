#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int rollNo;
    Node* left;
    Node* right;

    Node(int value) {
        rollNo = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int rollNo) {
        if (node == nullptr)
            return new Node(rollNo);

        if (rollNo < node->rollNo)
            node->left = insert(node->left, rollNo);
        else if (rollNo > node->rollNo)
            node->right = insert(node->right, rollNo);

        return node;
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int rollNo) {
        root = insert(root, rollNo);
    }

    void inorder() {
        stack<Node*> s;
        Node* current = root;

        while (current != nullptr || !s.empty()) {
            while (current != nullptr) {
                s.push(current);
                current = current->left;
            }

            current = s.top();
            s.pop();

            cout << current->rollNo << " ";
            current = current->right;
        }
    }

    void preorder() {
        if (root == nullptr)
            return;

        stack<Node*> s;
        s.push(root);

        while (!s.empty()) {
            Node* current = s.top();
            s.pop();

            cout << current->rollNo << " ";

            if (current->right != nullptr)
                s.push(current->right);

            if (current->left != nullptr)
                s.push(current->left);
        }
    }
};

int main() {
    BST tree;
    int n, rollNo;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";

    for (int i = 0; i < n; i++) {
        cin >> rollNo;
        tree.insert(rollNo);
    }

    cout << "\nInorder Traversal: ";
    tree.inorder();

    cout << "\nPreorder Traversal: ";
    tree.preorder();

}
