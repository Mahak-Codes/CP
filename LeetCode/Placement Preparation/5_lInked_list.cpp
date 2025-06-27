#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class LL
{
public:
    Node *head;

    LL()
    {
        head = nullptr;
    }
    void insert(int val)
    {
        Node *newnode = new Node(val);
        if (head == nullptr)
        {
            head = newnode ;
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void display(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void deleteN(int x){
        Node *temp=head;
        if(head->data==x){
            head=head->next;
            free(temp);
            return;
        }
        while(temp->next!=NULL && temp->next->data!=x){
            temp=temp->next;     
        }
        if(temp->next==nullptr){
            cout<<"Not found"<<endl;
            return;
        }
        Node *del=temp->next;
        temp->next=temp->next->next;
        free(del);
    }
    Node* middleNode(){
        Node *slow=head;
        Node * fast=head;
        while(slow->next!=NULL && fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
    Node* reverse(Node * &head){
        Node *prev=nullptr;
        Node *curr=head;
        while(curr!=nullptr){
           Node *nextt=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nextt;
        }
        head=prev;
        return head;
    }
    bool isPalidrome(Node *head){
        if(head->next==NULL){
            return true;
        }
        Node* middle= this->middleNode();
        Node *tail=reverse(middle->next);
        Node *temp=head;
        while(tail->next!=nullptr){
            if(tail->data==temp->data){
                tail=tail->next;
                temp=temp->next;
            }
            else{
                return false;
            }
        }
        return true;

    }
};

int main()
{
    int n;
    cin >> n; 
    LL list;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        list.insert(x);
    }
    list.display();

    Node *rev=list.reverse(list.head);
    list.display();

    Node* middle= list.middleNode();
    cout<<"middle: "<<middle->data<<endl;
  
    if(list.isPalidrome(list.head)){
        cout<<"YES,it palidrome"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    list.display();



}
