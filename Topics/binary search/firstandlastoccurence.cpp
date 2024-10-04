#include<bits/stdc++.h>
using namespace std;
#define long long int
int bs(int a[],int n,int x){
    int l=0,r=n-1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;  
        }
    }
    return -1;

}
int32_t main(){
  int x;
  cin>>x;
  int a[]={2,4,5,14,28,34};
  cout<<bs(a,6,x)<<endl;;

}