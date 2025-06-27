#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

Node* buildTree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;
    Node* node = new Node(val);
    node->left = buildTree();
    node->right = buildTree();
    return node;
}

void mirror(Node* root) {
    if (!root) return;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    cout << "Enter tree in pre-order (-1 for NULL): ";
    Node* root = buildTree();
    mirror(root);
    cout << "Inorder of mirrored tree: ";
    inorder(root);
    return 0;
}
