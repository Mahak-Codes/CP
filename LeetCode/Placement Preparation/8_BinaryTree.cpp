#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int d;
    Node *left;
    Node *right;
    Node(int da)
    {
        d = da;
        left = nullptr;
        right = nullptr;
    }
};
Node *buildtree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return nullptr;
    }
    Node *root = new Node(x);
    // cout<<"left child of "<<x<<endl;
    root->left = buildtree();
    // cout<<"right child of "<<x<<endl;
    root->right = buildtree();
    return root;
}
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int si = q.size();
        for (int i = 0; i < si; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->d << " ";
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}
void bottomview(Node *root)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    map<int, int> mp;
    while (!q.empty())
    {
        int si = q.size();
        for (int i = 0; i < si; i++)
        {
            auto frontnode = q.front();
            Node *curr = frontnode.first;
            int hd = frontnode.second;
            mp[hd] = curr->d;
            q.pop();

            if (curr->left)
            {
                q.push({curr->left, hd - 1});
            }
            if (curr->right)
            {
                q.push({curr->right, hd + 1});
            }
        }
    }
    for (auto x : mp)
    {
        cout << x.second << " ";
    }
    cout << endl;
}
void topview(Node *root)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    map<int, int> mp;
    while (!q.empty())
    {
        int si = q.size();
        for (int i = 0; i < si; i++)
        {
            auto frontnode = q.front();
            Node *curr = frontnode.first;
            int hd = frontnode.second;
            if (mp.find(hd) == mp.end())
            {
                mp[hd] = curr->d;
            }
            q.pop();

            if (curr->left)
            {
                q.push({curr->left, hd - 1});
            }
            if (curr->right)
            {
                q.push({curr->right, hd + 1});
            }
        }
    }
    for (auto x : mp)
    {
        cout << x.second << " ";
    }
    cout << endl;
}
pair<bool,int>isum(Node *root){
    if(root==NULL){
        return {1,0};
    }
    if(!root->left && !root->right){
        return {1,root->d};
    }
    pair<bool,int>l=isum(root->left);
    pair<bool,int>r=isum(root->right);
    if(l.second+r.second==root->d && l.first && r.first){
        return {1,root->d+l.second+r.second};
    }
    return {0,root->d+l.second+r.second};
}
int sibling(Node *root, int x)
{
    if (!root)
        return -1;
    if (root->left && root->left->d == x)
    {
        return root->right ? root->right->d : -1;
    }
    if (root->right && root->right->d == x)
    {
        return root->left ? root->left->d : -1;
    }
    int leftAns = sibling(root->left, x);
    if (leftAns != -1)
        return leftAns;
    return sibling(root->right, x);
}

void preorder(Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->d << " ";
    preorder(root->left);
    preorder(root->right);
}
int height(Node *root)
{
    if (!root)
    {
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    return max(l, r) + 1;
}
void inorder(Node *head)
{
    Node *curr = head;
    stack<Node *> st;
    while (curr || !st.empty())
    {
        while (curr)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr=st.top();
        st.pop();
        cout << curr->d << " ";
        curr = curr->right;
    }
}
void preorderI(Node *head)
{
    Node *curr = head;
    stack<Node*>s;
    s.push(curr);
    while(!s.empty()){
        curr=s.top();
        s.pop();
        cout<<curr->d<<" ";
        if(curr->right)s.push(curr->right);
        if(curr->left)s.push(curr->left);
    }
    
}
int main()
{

    Node *root = NULL;
    root = buildtree();
    cout << "levelOrder:" << endl;
    levelOrder(root);
    cout << "PreOrder:" << endl;
    preorder(root);
      cout << endl;
    cout << "PreOrder:" << endl;
    preorderI(root);
    cout << endl;
    cout << sibling(root, 7) << endl;
    cout << "height:" << height(root) << endl;
    cout << "bottomview:" << endl;
    bottomview(root);
    cout << "topview:" << endl;
    topview(root);

   cout<<"isSUM="<< (isum(root).first==1?true:false)<<endl;

    return 0;
}