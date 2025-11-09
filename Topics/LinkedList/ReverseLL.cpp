#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int d;
    ListNode *next;
    ListNode()
    {
        d = 0;
        next = nullptr;
    }
    ListNode(int val)
    {
        d = val;
        next = nullptr;
    }
};
class LL
{
public:
    ListNode *head;
    LL()
    {
        head = nullptr;
    }
    void insert(int val)
    {
        ListNode *newnode = new ListNode(val);
        if (head == nullptr)
        {
            head = newnode;
            return;
        }
        ListNode *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void display(ListNode *head)
    {
        ListNode *temp = head;
        while (temp != nullptr)
        {
            cout << temp->d << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    ListNode *reverse()
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *nextt = head->next;
        while (curr!=nullptr)
        {
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        return prev;
    }
};
int main()
{
    LL list;
    int n = 5;
    vector<int> a = {2, 3, 4, 5, 6};
    for (int i = 0; i < n; i++)
    {
        list.insert(a[i]);
    }
    list.display(list.head);
    ListNode *rhead=list.reverse();
    list.display(rhead);
    return 0;
}