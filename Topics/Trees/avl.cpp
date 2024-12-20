#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    int height;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
        height = 1;
    }
};
//O(LOGN)
bool search(Node *root,int val){
    if (!root)
    {
        return 0;
    }
    if(root->data ==val){
        return 1;
    }
    else if (val < root->data)
    { // left
        root->left = search(root->left, val);
    }
    else if (val > root->data)
    { // right
        root->right = search(root->right, val);
    }

}
int getheight(Node *root)
{
    if (!root)
    {
        return 0;
    }
    return root->height;
}
int update(Node *root)
{
    return root->height = 1 + max(getheight(root->left), getheight(root->right));
}
int balance(Node *root)
{
    return getheight(root->left) - getheight(root->right);
}
Node *rightrotation(Node *root)
{
    Node *temp = root;
    root = root->left;
    temp->left = root->right;
    root->right = temp;

    root->height = update(root);
    temp->height = update(temp);

    return root;
}
Node *leftrotation(Node *root)
{
    Node *temp = root;
    root = root->right;
    temp->right = root->left;
    root->left = temp;

    root->height = update(root);
    temp->height = update(temp);

    return root;
}
Node *insertToAVL(Node *root, int val)
{
    Node *newnode = new Node(val);
    if (!root)
    {
        return newnode;
    }
    if (val < root->data)
    { // left
        root->left = insertToAVL(root->left, val);
    }
    else if (val > root->data)
    { // right
        root->right = insertToAVL(root->right, val);
    }
    else
    {
        return root; // duplicates are not allowed
    }

    // update height

    root->height = 1 + max(getheight(root->left), getheight(root->right));

    // balance factor
    int bal = balance(root);

    if (bal > 1)
    { // ll or lr
        if (val < root->left->data)
        { // ll
            return rightrotation(root);
        }
        else
        { // lr
            root->left = leftrotation(root);
            return rightrotation(root);
        }
    }
    else if (bal < -1)
    { // rr or rl
        if (val > root->right->data)
        { // rr
            return leftrotation(root);
        }
        else
        { // rl
            root->right = rightrotation(root);
            return leftrotation(root);
        }
    }
    else
    {
        return root;
    }
}
Node* minValueNode(Node* node) {
    Node* current = node;

    // Find the leftmost leaf
    while (current->left != nullptr)
        current = current->left;

    return current;
}

Node* deleteNode(Node* root, int key) {
    // Perform standard BST delete
    if (root == nullptr)
        return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if ((root->left == nullptr) || (root->right == nullptr)) {
            Node* temp = root->left ? root->left : root->right;

            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            } else
                *root = *temp; // Copy the contents of the non-empty child

            delete temp;
        } else {
            Node* temp = minValueNode(root->right);

            root->key = temp->key;

            root->right = deleteNode(root->right, temp->key);
        }
    }

    if (root == nullptr)
        return root;

    // Update height of the current node
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Get the balance factor
    int balance = getBalance(root);

    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return rotateRight(root);

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return rotateLeft(root);

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

void preorder(Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = insertToAVL(root, 10);
    root = insertToAVL(root, 20);
    root = insertToAVL(root, 30);
    root = insertToAVL(root, 15);
    root = insertToAVL(root, 5);
    cout << "Inorder:";
    inorder(root);
}