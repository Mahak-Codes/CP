#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void merge(vector<int> &a, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> a1(n1), a2(n2);
    for (int i = 0; i < n1; i++)
    {
        a1[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = a[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            a[k++] = a1[i++];
        }
        else
        {
            a[k++] = a2[j++];
        }
    }

    while (i < n1){
        a[k++] = a1[i++];
    }
    while (j < n2){
        a[k++] = a2[j++];
    }
}

void mergeSort(int l, int r, vector<int> &a)
{
    if (l >= r){
        return;
    }
    int mid = l + (r - l) / 2;
    mergeSort(l, mid, a);
    mergeSort(mid + 1, r, a);
    merge(a, l, mid, r);
}

int32_t main()
{
    mahak_codes int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mergeSort(0, n - 1, a);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
