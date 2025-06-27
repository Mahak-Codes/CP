#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int>&a,int n,int i){
    int l=2*i+1;
    int r=2*i+2;
    int largest=i;
    if(a[largest]<a[l] && l<n){
        largest=l;
    }
    if(r<n && a[largest]<a[r]){
        largest=r;
    }
    if(largest!=i){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
   
}
void buildheap(vector<int>&a,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
}
void heapSort(vector<int> &arr) {
    int n = arr.size();
    buildheap(arr, n);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);  
        heapify(arr, i, 0);    
    }
}

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heapSort(a);
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}