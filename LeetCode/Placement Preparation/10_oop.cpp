#include <bits/stdc++.h>
using namespace std;
class Employee
{
protected:
    int salary;
    int id;
    string name;

public:
  
    Employee(int id,int salry,string name){
        this->id=id;
        this->salary=salry;
        this->name=name;
    }
    int getSalary(){
        return salary;
    }
    void setSalary(int sal){
        salary=sal;
    }
    void display(){
        cout << name << " has an ID of " << id << " and earns a salary of " << salary << "." << endl;
    }

};
class Manager:public Employee{
   string dept;
   public:
   Manager(int id,int sal,string name,string dept):Employee(id,sal,name){
    this->dept=dept;
   }
   void display() {
    cout<<name<<" is Manager of "<<dept<<"Department"<<endl;
   }
};
void merge(vector<Employee*>&a,int l,int h,int mid){
    int i=l,j=mid+1;
    vector<Employee*>temp;
    while(i<=mid && j<=h){
        if(a[i]->getSalary()<a[j]->getSalary()){
            temp.push_back(a[i]);
            i++;
        }
        else {
            temp.push_back(a[j]);
            j++;
        }

    } 
    while(i<=mid){
        temp.push_back(a[i]); 
        i++;
    }
    while(j<=h){
         temp.push_back(a[j]);
         j++;
    }
    int c=0;
    for(int i=l;i<=h;i++){
        a[i]=temp[c++];
    }
}
void mergeSort(int l,int h,vector<Employee*>&a){
    if(l>=h){
        return;
    }
    int mid=(l+h)/2;
    mergeSort(l,mid,a);
    mergeSort(mid+1,h,a);
    merge(a,l,h,mid);
}
int main()
{
    int n;
    cin>>n;
    vector<Employee *>e;
    for(int i=0;i<n;i++){
        string name;
        int id,salary;
        cin>>id>>salary>>name;
        e.push_back( new Employee(id,salary,name));
    }
    e.push_back(new Manager(3, 135000, "Charlie", "Finance"));
    mergeSort(0,n-1,e);
    for(int i=0;i<n+1;i++){
        e[i]->display();
    }


    return 0;
} 