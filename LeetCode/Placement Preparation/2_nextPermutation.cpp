#include <bits/stdc++.h>
using namespace std;

vector<int> prevPermOpt1(vector<int> &arr)
{

    int n = arr.size();

    int i, j = n - 1;

    for (i = n - 2; i >= 0; --i)
        if (arr[i ] > arr[i+1])
            break;

    if (i < 0)
        return arr;

    while ((arr[j] >= arr[i] && j > i) || (arr[j - 1] == arr[j]))
        j--;

    swap(arr[i], arr[j]);

    return arr;
}
void nextPermutation(vector<int> &a)
{
    int n = a.size();
    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(a.begin(), a.end());
        return;
    }
    for (int i = n - 1; i > ind; i--)
    {
        if (a[i] > a[ind])
        {
            swap(a[i], a[ind]);
            break;
        }
    }
    reverse(a.begin() + ind + 1, a.end());
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
      prevPermOpt1(a);
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
  
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}