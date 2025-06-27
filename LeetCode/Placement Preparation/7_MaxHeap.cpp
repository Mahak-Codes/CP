#include <bits/stdc++.h>
using namespace std;
class MaxHeap
{
    vector<int> a;

public:
    void heapifyUp(int i)
    {
        while (i > 0 && (a[(i - 1) / 2] < a[i]))
        {
            swap(a[(i - 1) / 2], a[i]);
            i = (i - 1) / 2;
        }
    }
    void heapifyDown(int i)
    {
        int n = a.size();
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < n && a[l] > a[largest])
        {
            largest = l;
        }
        if (r < n && a[r] > a[largest])
        {
            largest = r;
        }
        if (largest != i)
        {
            swap(a[i], a[largest]);
            heapifyDown(largest);
        }
    }
    void insert(int x)
    {
        a.push_back(x);
        heapifyUp(a.size() - 1);
    }
    int getMax()
    {
        if (a.empty())
        {
            cout << "empty" << endl;
            return -1;
        }
        else
        {
            cout << "MaxELement" << a[0] << endl;
            return a[0];
        }
    }
    void extractmax()
    {
        if (a.empty())
        {
            return;
        }
        a[0] = a.back();
        a.pop_back();
        heapifyDown(0);
    }
    void display()
    {
        for (auto x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};
int main()
{

    MaxHeap pq;
    pq.insert(3);
    pq.insert(43);
    pq.getMax();
    pq.insert(12);
    pq.display();
    pq.extractmax();
    pq.getMax();
    pq.insert(18);
    pq.display();

    return 0;
}